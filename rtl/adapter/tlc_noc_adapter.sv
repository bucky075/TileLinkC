`timescale 1ns/1ps
// TL-C <-> NoC adapter: serialize TL-C A/C/E and accept B/D into outgoing NoC flits.
// This version is conservative for Verilator and synthesizable style.
// Assumes packages: noc_params_pkg, noc_flit_pkg, tlc_types_pkg exist and provide FLIT_WIDTH, HDR_WIDTH, etc.

module tlc_noc_adapter #(
  parameter int NODE_ID = 0,
  parameter int MAX_OUTST = 64   // number of concurrent outstanding reassembly/tx entries
) (
  input  logic                      clk,
  input  logic                      rst_n,

  // TL-C side
  // A channel (NoC -> manager)
  output logic                      a_valid,
  output tlc_types_pkg::tl_a_t     a_bits,
  input  logic                      a_ready,

  // B channel (manager -> NoC)  -- probes originate here
  input  logic                      b_valid,
  input  tlc_types_pkg::tl_b_t     b_bits,
  output logic                      b_ready,

  // C channel (NoC -> manager)
  output logic                      c_valid,
  output tlc_types_pkg::tl_c_t     c_bits,
  input  logic                      c_ready,

  // D channel (manager -> NoC)
  input  logic                      d_valid,
  input  tlc_types_pkg::tl_d_t     d_bits,
  output logic                      d_ready,

  // E channel (NoC -> manager)
  output logic                      e_valid,
  output tlc_types_pkg::tl_e_t     e_bits,
  input  logic                      e_ready,

  // NoC local port (to/from router LOCAL)
  output logic                      noc_out_valid,
  output logic [FLIT_WIDTH-1:0]     noc_out_flit,
  input  logic                      noc_out_ready,

  input  logic                      noc_in_valid,
  input  logic [FLIT_WIDTH-1:0]     noc_in_flit,
  output logic                      noc_in_ready
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  // Derived constants
  localparam int PAYLOAD_WIDTH = FLIT_WIDTH - HDR_WIDTH;
  localparam int TL_A_W = $bits(tl_a_t);
  localparam int TL_B_W = $bits(tl_b_t);
  localparam int TL_C_W = $bits(tl_c_t);
  localparam int TL_D_W = $bits(tl_d_t);
  localparam int TL_E_W = $bits(tl_e_t);

  localparam int ACC_W = TL_MAX_BEATS * FLIT_WIDTH; // accumulation window (bits)
  // Note: ACC_W must be >= max TL_*_W for your configs.

  // ------------------------
  // Outgoing table (manager -> NoC). Stores serialization jobs for B and D.
  typedef struct packed {
    logic in_use;
    logic [TXN_ID_WIDTH-1:0] txn_id;
    logic [$clog2(MAX_OUTST)-1:0] idx;
    logic [NODE_ID_WIDTH-1:0] src_node;
    logic [NODE_ID_WIDTH-1:0] dst_node;
    logic [2:0] vc;
    logic [2:0] pkt_type;
    logic [ACC_W-1:0] payload_acc; // MSB-first accumulation of whole TL struct (per-beat concatenation)
    int total_flits;
    int flits_sent;
  } out_entry_t;

  out_entry_t out_table [0:MAX_OUTST-1];

  // simple allocation pointer helper (search free)
  function automatic int out_alloc();
    int i;
    begin
      out_alloc = -1;
      for (i = 0; i < MAX_OUTST; i = i + 1)
        if (!out_table[i].in_use) begin out_alloc = i; break; end
    end
  endfunction

  // noc_out staging regs
  logic noc_out_valid_r;
  logic [FLIT_WIDTH-1:0] noc_out_flit_r;
  assign noc_out_valid = noc_out_valid_r;
  assign noc_out_flit  = noc_out_flit_r;

  // ------------------------
  // Incoming table (NoC -> manager) : reassembly per txn_id
  typedef struct packed {
    logic valid;
    logic [TXN_ID_WIDTH-1:0] txn_id;
    logic [ACC_W-1:0] accum; // MSB-first packing of payloads
    int flits_recv;
  } in_entry_t;

  in_entry_t in_table [0:MAX_OUTST-1];

  function automatic int in_find(logic [TXN_ID_WIDTH-1:0] tid);
    int i;
    begin
      in_find = -1;
      for (i = 0; i < MAX_OUTST; i = i + 1)
        if (in_table[i].valid && in_table[i].txn_id == tid) begin in_find = i; break; end
    end
  endfunction

  // ------------------------
  // Initialization
  integer ii;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (ii = 0; ii < MAX_OUTST; ii = ii + 1) begin
        out_table[ii].in_use     <= 1'b0;
        out_table[ii].txn_id     <= '0;
        out_table[ii].payload_acc<= '0;
        out_table[ii].total_flits<= 0;
        out_table[ii].flits_sent <= 0;
        in_table[ii].valid       <= 1'b0;
        in_table[ii].txn_id      <= '0;
        in_table[ii].accum       <= '0;
        in_table[ii].flits_recv  <= 0;
      end
      noc_out_valid_r <= 1'b0;
      noc_out_flit_r  <= '0;
      a_valid <= 1'b0;
      c_valid <= 1'b0;
      e_valid <= 1'b0;
    end else begin
      // handled in other blocks
    end
  end

  // ------------------------
  // Accept B/D from manager when there is free out_table slot.
  // Provide combinational ready signals:
  always_comb begin
    b_ready = 1'b0;
    d_ready = 1'b0;
    int free_idx;
    free_idx = -1;
    for (ii = 0; ii < MAX_OUTST; ii = ii + 1) begin
      if (!out_table[ii].in_use) begin free_idx = ii; break; end
    end
    if (free_idx != -1) begin
      if (b_valid) b_ready = 1'b1;
      else if (d_valid) d_ready = 1'b1;
    end
  end

  // When accept B/D, allocate an out_table entry and pack the TL struct into payload_acc
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      // nothing: init done above
    end else begin
      if (b_valid && b_ready) begin
        int idx;
        idx = out_alloc();
        if (idx != -1) begin
          out_table[idx].in_use <= 1'b1;
          out_table[idx].txn_id <= {NODE_ID[TXN_ID_WIDTH-1:0], idx[TXN_ID_WIDTH-1:0]}; // unique id per entry
          out_table[idx].src_node <= NODE_ID;
          out_table[idx].dst_node <= b_bits.b_source; // route to client source
          out_table[idx].vc <= VC_CTRL;
          out_table[idx].pkt_type <= 3'd6; // B mapping (as used previously)
          out_table[idx].payload_acc <= '0;
          // place TL_B_W MSB-aligned into ACC_W MSB region
          out_table[idx].payload_acc[ACC_W-1 -: TL_B_W] <= logic'(b_bits);
          out_table[idx].total_flits <= (TL_B_W + PAYLOAD_WIDTH - 1) / PAYLOAD_WIDTH;
          out_table[idx].flits_sent <= 0;
        end
      end else if (d_valid && d_ready) begin
        int idx;
        idx = out_alloc();
        if (idx != -1) begin
          out_table[idx].in_use <= 1'b1;
          out_table[idx].txn_id <= {NODE_ID[TXN_ID_WIDTH-1:0], idx[TXN_ID_WIDTH-1:0]};
          out_table[idx].src_node <= NODE_ID;
          out_table[idx].dst_node <= d_bits.d_source;
          out_table[idx].vc <= VC_RESP;
          out_table[idx].pkt_type <= 3'd5; // D
          out_table[idx].payload_acc <= '0;
          out_table[idx].payload_acc[ACC_W-1 -: TL_D_W] <= logic'(d_bits);
          out_table[idx].total_flits <= (TL_D_W + PAYLOAD_WIDTH - 1) / PAYLOAD_WIDTH;
          out_table[idx].flits_sent <= 0;
        end
      end
    end
  end

  // ------------------------
  // Drive outgoing NoC flits from out_table entries (simple FIFO by lowest index).
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      noc_out_valid_r <= 1'b0;
      noc_out_flit_r  <= '0;
    end else begin
      // If currently valid and downstream not ready -> hold
      if (noc_out_valid_r && !noc_out_ready) begin
        noc_out_valid_r <= noc_out_valid_r;
      end else begin
        // choose first outstanding entry that still has flits
        int choose = -1;
        for (ii = 0; ii < MAX_OUTST; ii = ii + 1) begin
          if (out_table[ii].in_use && (out_table[ii].flits_sent < out_table[ii].total_flits)) begin
            choose = ii; break;
          end
        end

        if (choose == -1) begin
          noc_out_valid_r <= 1'b0;
          noc_out_flit_r  <= '0;
        end else begin
          // compute chunk MSB-first: pick slice based on flits_sent
          int sent = out_table[choose].flits_sent;
          int tot  = out_table[choose].total_flits;
          int hi_bit = ACC_W - (sent * PAYLOAD_WIDTH) - 1;
          int lo_bit = hi_bit - (PAYLOAD_WIDTH - 1);
          logic [PAYLOAD_WIDTH-1:0] chunk;
          if (hi_bit >= ACC_W) chunk = '0;
          else chunk = out_table[choose].payload_acc[hi_bit -: PAYLOAD_WIDTH];

          // build header
          noc_hdr_t h;
          h.src_node = out_table[choose].src_node;
          h.dst_node = out_table[choose].dst_node;
          h.txn_id   = out_table[choose].txn_id;
          h.vc       = out_table[choose].vc;
          h.pkt_type = out_table[choose].pkt_type;
          h.first    = (sent == 0);
          h.last     = (sent == tot-1);

          noc_out_flit_r  <= build_flit(h, chunk);
          noc_out_valid_r <= 1'b1;

          if (noc_out_ready) begin
            out_table[choose].flits_sent <= out_table[choose].flits_sent + 1;
            if (h.last) begin
              // release entry
              out_table[choose].in_use <= 1'b0;
              out_table[choose].payload_acc <= '0;
              out_table[choose].total_flits <= 0;
              out_table[choose].flits_sent <= 0;
            end
          end
        end
      end
    end
  end

  // ------------------------
  // Incoming handling: accept flits and reassemble per txn_id
  // noc_in_ready = 1 (we accept when we can allocate or append)
  always_comb begin
    noc_in_ready = 1'b1; // conservative: always accept; if you want backpressure, check in_table free slots
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      // handled by init block above
    end else begin
      if (noc_in_valid && noc_in_ready) begin
        noc_hdr_t ih = extract_hdr(noc_in_flit);
        logic [PAYLOAD_WIDTH-1:0] pld = noc_in_flit[PAYLOAD_WIDTH-1:0];
        int idx = in_find(ih.txn_id);

        if (ih.first) begin
          // allocate free slot
          int aidx = -1;
          for (ii = 0; ii < MAX_OUTST; ii = ii + 1)
            if (!in_table[ii].valid) begin aidx = ii; break; end
          if (aidx != -1) begin
            in_table[aidx].valid <= 1'b1;
            in_table[aidx].txn_id <= ih.txn_id;
            in_table[aidx].accum  <= '0;
            // place first chunk at MSB side (MSB-aligned)
            in_table[aidx].accum[ACC_W-1 -: PAYLOAD_WIDTH] <= pld;
            in_table[aidx].flits_recv <= 1;
            idx = aidx;
          end else begin
            // no slot -> drop silently (or assert error); kept simple
            idx = -1;
          end
        end else if (idx != -1) begin
          // append: compute insertion position from number already received
          int insert_pos = ACC_W - ((in_table[idx].flits_recv + 1) * PAYLOAD_WIDTH);
          if (insert_pos >= 0) begin
            in_table[idx].accum[insert_pos +: PAYLOAD_WIDTH] <= pld;
          end
          in_table[idx].flits_recv <= in_table[idx].flits_recv + 1;
        end

        // If last and idx valid -> extract TL struct and present to manager
        if (ih.last && idx != -1) begin
          if (ih.pkt_type == 3'd0) begin
            // A channel (example mapping)
            int msb_off = ACC_W - TL_A_W;
            logic [TL_A_W-1:0] whole = in_table[idx].accum[msb_off -: TL_A_W];
            if (!a_valid) begin
              a_bits  <= tl_a_t'(whole);
              a_valid <= 1'b1;
            end
            if (a_valid && a_ready) begin
              a_valid <= 1'b0;
              in_table[idx].valid <= 1'b0;
              in_table[idx].accum <= '0;
              in_table[idx].flits_recv <= 0;
            end
          end else if (ih.pkt_type == 3'd6) begin
            // C channel mapping (example)
            int msb_off_c = ACC_W - TL_C_W;
            logic [TL_C_W-1:0] wholec = in_table[idx].accum[msb_off_c -: TL_C_W];
            if (!c_valid) begin
              c_bits <= tl_c_t'(wholec);
              c_valid <= 1'b1;
            end
            if (c_valid && c_ready) begin
              c_valid <= 1'b0;
              in_table[idx].valid <= 1'b0;
              in_table[idx].accum <= '0;
              in_table[idx].flits_recv <= 0;
            end
          end else begin
            // treat as E (fallback)
            int mo = ACC_W - TL_E_W;
            logic [TL_E_W-1:0] wholee = in_table[idx].accum[mo -: TL_E_W];
            if (!e_valid) begin
              e_bits <= tl_e_t'(wholee);
              e_valid <= 1'b1;
            end
            if (e_valid && e_ready) begin
              e_valid <= 1'b0;
              in_table[idx].valid <= 1'b0;
              in_table[idx].accum <= '0;
              in_table[idx].flits_recv <= 0;
            end
          end
        end
      end

      // Edge case: if outputs are asserted and handshake occurs outside last-flit code, handle consumption
      if (a_valid && a_ready) a_valid <= 1'b0;
      if (c_valid && c_ready) c_valid <= 1'b0;
      if (e_valid && e_ready) e_valid <= 1'b0;
    end
  end

endmodule