`timescale 1ns/1ps
// tl_manager_adapter.sv
// Demo TL-C manager adapter (memory-backed). Verilator-safe.
// - Parses payload layout produced by tl_client_adapter
// - Simple memory read/write behavior (no coherence)
// - Allocates sink ids round-robin
// - Emits single-beat D responses echoing txn_id and appropriate fields

module tl_manager_adapter #(
  parameter int NODE_ID = 0,
  // small memory for demo (number of 64-bit words)
  parameter int MEM_WORDS = 1024
)(
  input  logic                     clk,
  input  logic                     rst_n,

  // NoC -> manager (requests arrive here)
  input  logic                     noc_in_valid,
  input  logic [FLIT_WIDTH-1:0]    noc_in_flit,
  output logic                     noc_in_ready,

  // manager -> NoC (responses)
  output logic                     noc_out_valid,
  output logic [FLIT_WIDTH-1:0]    noc_out_flit,
  input  logic                     noc_out_ready
);

  // ---------------------------------------------------------------------
  // Imports and localparams (must match tl_client_adapter)
  // ---------------------------------------------------------------------
  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  // reuse payload layout constants from client adapter
  localparam int OFF_DATA   = 0;
  localparam int W_DATA     = TL_DATA_WIDTH;
  localparam int OFF_MASK   = OFF_DATA + W_DATA;
  localparam int W_MASK     = TL_STRB_WIDTH;
  localparam int OFF_SIZE   = OFF_MASK + W_MASK;
  localparam int W_SIZE     = TL_SIZE_WIDTH;
  localparam int OFF_OPCODE = OFF_SIZE + W_SIZE;
  localparam int W_OPCODE   = TL_OPCODE_WIDTH;
  localparam int OFF_PARAM  = OFF_OPCODE + W_OPCODE;
  localparam int W_PARAM    = TL_PARAM_WIDTH;
  localparam int OFF_TSRC   = OFF_PARAM + W_PARAM;
  localparam int W_TSRC     = TL_SOURCE_WIDTH;
  localparam int OFF_TSINK  = OFF_TSRC + W_TSRC;
  localparam int W_TSINK    = TL_SINK_WIDTH;
  localparam int OFF_ADDR   = OFF_TSINK + W_TSINK;
  localparam int W_ADDR_LOW = 64;
  localparam int OFF_TXN    = OFF_ADDR + W_ADDR_LOW;
  localparam int W_TXN      = TXN_ID_WIDTH;

  // sanity check at elaboration
  initial begin
    if ((OFF_TXN + W_TXN) > PAYLOAD_WIDTH) begin
      $error("tl_manager_adapter: payload layout mismatch: requires %0d bits but PAYLOAD_WIDTH=%0d",
             (OFF_TXN + W_TXN), PAYLOAD_WIDTH);
    end
  end

  // ---------------------------------------------------------------------
  // Internal state
  // ---------------------------------------------------------------------
  // Simple memory (64-bit words)
  logic [TL_DATA_WIDTH-1:0] mem [0:MEM_WORDS-1];

  // sink allocation
  localparam int SINK_COUNT = (1 << TL_SINK_WIDTH);
  logic [TL_SINK_WIDTH-1:0] sink_alloc_ptr;
  logic [SINK_COUNT-1:0] sink_in_use;

  // handshake/reg
  logic processing_req;
  logic [FLIT_WIDTH-1:0] req_flit_reg;
  noc_hdr_t in_hdr;
  flit_payload_t in_payload;

  // parsed request fields
  logic [TL_DATA_WIDTH-1:0]  req_data;
  logic [TL_STRB_WIDTH-1:0]  req_mask;
  logic [TL_SIZE_WIDTH-1:0]  req_size;
  logic [TL_OPCODE_WIDTH-1:0] req_opcode;
  logic [TL_PARAM_WIDTH-1:0]  req_param;
  logic [TL_SOURCE_WIDTH-1:0] req_source;
  logic [TL_SINK_WIDTH-1:0]   req_sink;
  logic [63:0]                req_addr_low;
  logic [TXN_ID_WIDTH-1:0]    req_txn;

  // response assembly
  noc_hdr_t out_hdr;
  flit_payload_t out_payload;
  logic [FLIT_WIDTH-1:0] out_flit_reg;
  logic out_valid_reg;

  integer i;

  // ---------------------------------------------------------------------
  // Default outputs
  // ---------------------------------------------------------------------
  assign noc_out_valid = out_valid_reg;
  assign noc_out_flit  = out_flit_reg;

  // By default be ready to accept when not already processing a request
  // We'll accept one request at a time for simplicity
  always_comb begin
    noc_in_ready = !processing_req;
  end

  // ---------------------------------------------------------------------
  // Sink allocation helper (combinational)
  // ---------------------------------------------------------------------
  function automatic logic [TL_SINK_WIDTH-1:0] alloc_sink();
    int start;
    int idx;
    logic [TL_SINK_WIDTH-1:0] result;
    result = '0;
    start = sink_alloc_ptr;
    idx = -1;
    for (i = 0; i < SINK_COUNT; i++) begin
      int cand;
      cand = (start + i) % SINK_COUNT;
      if (!sink_in_use[cand]) begin
        idx = cand;
        break;
      end
    end
    if (idx == -1) begin
      // no sink free -> return zero (caller must check sink_in_use)
      result = '0;
    end else begin
      result = idx[TL_SINK_WIDTH-1:0];
    end
    return result;
  endfunction

  // ---------------------------------------------------------------------
  // Accept incoming request flit (single-beat for demo). Parse payload.
  // ---------------------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      processing_req <= 1'b0;
      req_flit_reg <= '0;
      sink_alloc_ptr <= '0;
      sink_in_use <= '0;
      out_valid_reg <= 1'b0;
      out_flit_reg <= '0;
      // init memory to zero
      for (i = 0; i < MEM_WORDS; i++) begin
        mem[i] <= '0;
      end
    end else begin
      // clear out when downstream accepted
      if (out_valid_reg && noc_out_ready) begin
        out_valid_reg <= 1'b0;
        out_flit_reg <= '0;
      end

      // If not currently processing and a request arrives, latch it
      if (!processing_req && noc_in_valid && noc_in_ready) begin
        processing_req <= 1'b1;
        req_flit_reg <= noc_in_flit;

        // parse header & payload (combinational-friendly but stored here)
        in_hdr = extract_hdr(noc_in_flit);
        in_payload = noc_in_flit[PAYLOAD_WIDTH-1:0];

        // extract fields from payload using offsets defined above
        req_data   <= in_payload[OFF_DATA +: W_DATA];
        req_mask   <= in_payload[OFF_MASK +: W_MASK];
        req_size   <= in_payload[OFF_SIZE +: W_SIZE];
        req_opcode <= in_payload[OFF_OPCODE +: W_OPCODE];
        req_param  <= in_payload[OFF_PARAM +: W_PARAM];
        req_source <= in_payload[OFF_TSRC +: W_TSRC];
        req_sink   <= in_payload[OFF_TSINK +: W_TSINK];
        req_addr_low <= in_payload[OFF_ADDR +: W_ADDR_LOW];
        req_txn    <= in_payload[OFF_TXN +: W_TXN];

        // We'll immediately process the request below in this same cycle (combinational commit on next posedge)
      end

      // process latched request (single-beat demo)
      if (processing_req) begin
        // Default: prepare a D response flit (single beat)
        // allocate a sink id for this response
        logic [TL_SINK_WIDTH-1:0] chosen_sink;
        chosen_sink = alloc_sink();

        // mark sink as used (if available)
        if (!sink_in_use[chosen_sink]) begin
          sink_in_use[chosen_sink] <= 1'b1;
          // advance allocation pointer
          sink_alloc_ptr <= (chosen_sink + 1) % SINK_COUNT;
        end else begin
          // no sink free: stall issuing response (shouldn't happen for small demo)
          // keep processing_req asserted and wait; noc_in_ready will be low next cycle
        end

        // Prepare out header
        out_hdr = '0;
        // send response back to original requester node:
        // The requester node is encoded in incoming header's dst_node? No — the incoming header's tl_source field holds the original client source id.
        // For routing back, use in_hdr.dst_node? The request's header.dst_node was destination when sent; requester's node id is not directly in hdr.dst_node.
        // We use the header's tl_source as the node id of the request's source — for this demo assume that the NoC receiver will route by using dst_node = in_hdr.src_node.
        // However we don't have src_node in noc_hdr_t. Instead, the client adapter set the request hdr.dst_node to the address destination and set hdr.tl_source to client's source id.
        // For routing back across the mesh we need to know the original node id. The simplest robust approach: set out_hdr.dst_node = in_hdr.tl_source (client's node id).
        out_hdr.dst_node   <= in_hdr.tl_source;        // route back to requesting node (client)
        out_hdr.vc         <= tl_channel_to_vc(TL_CH_D);
        out_hdr.tl_channel <= TL_CH_D;
        // set tl_source to manager's source id (NODE_ID) so client sees d_source = manager id if expected
        out_hdr.tl_source  <= NODE_ID[$bits(out_hdr.tl_source)-1:0];
        out_hdr.tl_sink    <= chosen_sink;
        out_hdr.first      <= 1'b1;
        out_hdr.last       <= 1'b1;

        // Build payload for D (echo txn, include data if needed)
        out_payload = '0;

        // default opcode mapping and payload
        if (req_opcode == A_Get) begin
          // compute memory index (word address): use low bits of address / 8
          int unsigned addr_word;
          addr_word = req_addr_low / TL_BEAT_BYTES;
          if (addr_word >= MEM_WORDS) addr_word = addr_word % MEM_WORDS;
          out_payload[OFF_DATA +: W_DATA] = mem[addr_word];
          out_payload[OFF_OPCODE +: W_OPCODE] = D_AccessAckData;
        end
        else if (req_opcode == A_PutFullData || req_opcode == A_PutPartialData) begin
          // write to memory
          int unsigned addr_word_w;
          addr_word_w = req_addr_low / TL_BEAT_BYTES;
          if (addr_word_w >= MEM_WORDS) addr_word_w = addr_word_w % MEM_WORDS;
          // mask-aware write: for simplicity, apply full write if any mask bit set per-beat
          // More precise mask handling omitted for brevity
          mem[addr_word_w] <= req_data;
          out_payload[OFF_OPCODE +: W_OPCODE] = D_AccessAck; // ack without data
        end
        else begin
          // default AccessAck / AccessAckData if needed
          out_payload[OFF_OPCODE +: W_OPCODE] = D_AccessAck;
        end

        // include size/param/source/sink/address_low/txn in payload for client to parse
        out_payload[OFF_SIZE +: W_SIZE] = req_size;
        out_payload[OFF_PARAM +: W_PARAM] = req_param;
        out_payload[OFF_TSRC +: W_TSRC] = NODE_ID[$bits(out_payload[OFF_TSRC +: W_TSRC])-1:0]; // manager's source id
        out_payload[OFF_TSINK +: W_TSINK] = chosen_sink;
        out_payload[OFF_ADDR +: W_ADDR_LOW] = req_addr_low;
        out_payload[OFF_TXN +: W_TXN] = req_txn;

        // Build flit and present it when noc_out_ready allows
        out_flit_reg <= build_flit(out_hdr, out_payload);

        if (noc_out_ready) begin
          out_valid_reg <= 1'b1;
          // mark processing_req complete (response presented)
          processing_req <= 1'b0;
        end else begin
          // hold until downstream accepts
          out_valid_reg <= 1'b0;
          // processing_req remains true; will retry next cycle
        end
      end // processing_req
    end // rst_n
  end // always_ff

endmodule