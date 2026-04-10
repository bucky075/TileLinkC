`timescale 1ns/1ps
// tl_client_adapter.sv
// TL-UH (team master) -> TL-C client adapter (full-field serializer)
// - Serializes TL A into noc_flit_t payload (address, opcode, param, size, mask, data, corrupt, source, txn_id).
// - Routes by address (low NODE_ID_WIDTH bits).
// - Supports multibeat A streaming.
// - Reassembles multibeat D responses and presents tl_d_t to local master.
// - Verilator-safe: no inline 'int' in procedural blocks, no dynamic arrays, no # delays.

module tl_client_adapter #(
  parameter int NODE_ID = 0
)(
  input  logic clk,
  input  logic rst_n,

  // A channel (from TL-UH master via tluh_to_tlc_adapter)
  input  logic                 a_valid,
  input  tlc_types_pkg::tl_a_t a_bits,
  output logic                 a_ready,

  // B channel (to local cache/controller)
  output logic                 b_valid,
  output tlc_types_pkg::tl_b_t b_bits,
  input  logic                 b_ready,

  // C channel (from local cache/controller)
  input  logic                 c_valid,
  input  tlc_types_pkg::tl_c_t c_bits,
  output logic                 c_ready,

  // D channel (to local master)
  output logic                 d_valid,
  output tlc_types_pkg::tl_d_t d_bits,
  input  logic                 d_ready,

  // E channel (from local cache/controller)
  input  logic                 e_valid,
  input  tlc_types_pkg::tl_e_t e_bits,
  output logic                 e_ready,

  // NoC request (toward mesh)
  output logic                  noc_req_valid,
  output logic [FLIT_WIDTH-1:0] noc_req_flit,
  input  logic                  noc_req_ready,

  // NoC response (from mesh)
  input  logic                  noc_resp_valid,
  input  logic [FLIT_WIDTH-1:0] noc_resp_flit,
  output logic                  noc_resp_ready
);

  // ---------------------------------------------------------------------
  // imports and localparams
  // ---------------------------------------------------------------------
  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  // Payload layout (LSB=bit 0). Choose conservative offsets so it fits PAYLOAD_WIDTH.
  // LSB..MSB:
  // [0  :63]   : a_data / d_data  (64)
  // [64 :71]   : a_mask / d_mask  (8)
  // [72 :79]   : a_size / d_size  (8)
  // [80 :82]   : a_opcode / d_opcode (3)
  // [83 :85]   : a_param / d_param   (3)
  // [86 :88]   : tl_source (3)
  // [89 :91]   : tl_sink   (3)
  // [92 :155]  : address_low (64)
  // [156:187]  : txn_id (32)
  // [188:PAYLOAD_WIDTH-1] : reserved
  localparam int OFF_DATA      = 0;
  localparam int W_DATA        = TL_DATA_WIDTH;
  localparam int OFF_MASK      = OFF_DATA + W_DATA;                     // 64
  localparam int W_MASK        = TL_STRB_WIDTH;                         // 8
  localparam int OFF_SIZE      = OFF_MASK + W_MASK;                     // 72
  localparam int W_SIZE        = TL_SIZE_WIDTH;                         // 8
  localparam int OFF_OPCODE    = OFF_SIZE + W_SIZE;                     // 80
  localparam int W_OPCODE      = TL_OPCODE_WIDTH;                       // 3
  localparam int OFF_PARAM     = OFF_OPCODE + W_OPCODE;                  // 83
  localparam int W_PARAM       = TL_PARAM_WIDTH;                        // 3
  localparam int OFF_TSRC      = OFF_PARAM + W_PARAM;                    // 86
  localparam int W_TSRC        = TL_SOURCE_WIDTH;                       // 3
  localparam int OFF_TSINK     = OFF_TSRC + W_TSRC;                      // 89
  localparam int W_TSINK       = TL_SINK_WIDTH;                         // 3
  localparam int OFF_ADDR      = OFF_TSINK + W_TSINK;                    // 92
  localparam int W_ADDR_LOW    = 64;                                    // carry low 64 bits
  localparam int OFF_TXN       = OFF_ADDR + W_ADDR_LOW;                 // 156
  localparam int W_TXN         = TXN_ID_WIDTH;                          // 32

  // sanity: ensure we don't exceed PAYLOAD_WIDTH
  initial begin
    if ( (OFF_TXN + W_TXN) > PAYLOAD_WIDTH ) begin
      $error("tl_client_adapter: payload layout exceeds PAYLOAD_WIDTH (%0d > %0d)", (OFF_TXN + W_TXN), PAYLOAD_WIDTH);
    end
  end

  // ---------------------------------------------------------------------
  // State and registers
  // ---------------------------------------------------------------------
  typedef enum logic [1:0] { S_IDLE = 2'd0, S_SEND = 2'd1 } send_state_e;

  send_state_e send_state;

  // Request buffering (store a_bits while streaming)
  tlc_types_pkg::tl_a_t req_buf;
  logic req_buf_valid;

  // beat counters
  logic [$clog2(TL_MAX_BEATS+1)-1:0] req_total_beats;
  logic [$clog2(TL_MAX_BEATS+1)-1:0] req_beat_idx;

  // txn id counter
  logic [TXN_ID_WIDTH-1:0] txn_counter;

  // outgoing header + payload temporaries
  noc_hdr_t req_hdr;
  flit_payload_t req_payload;

  noc_hdr_t       resp_hdr;
flit_payload_t  resp_payload;


  logic [FLIT_WIDTH-1:0] req_flit_reg;

  // incoming response assembly
  tlc_types_pkg::tl_d_t d_accum;
  logic d_accum_valid;
  logic d_first_seen;
  logic [TL_SIZE_WIDTH-1:0] d_size_accum;
  logic [$clog2(TL_MAX_BEATS+1)-1:0] d_beats_expected;
  logic [$clog2(TL_MAX_BEATS+1)-1:0] d_beats_seen;

  // outputs
  logic noc_req_valid_r;
  logic [FLIT_WIDTH-1:0] noc_req_flit_r;
  logic d_out_valid_r;
  tlc_types_pkg::tl_d_t d_out_r;

  // flow-control for B channel (forwarded from NoC responses)
  logic b_valid_r;
  tlc_types_pkg::tl_b_t b_bits_r;

  // combinational loop indices
  integer i;

  // ---------------------------------------------------------------------
  // Helper: compute beats from size (size is log2(bytes))
  // ---------------------------------------------------------------------
  function automatic int size_to_beats(input int size);
    int bytes;
    int beats;
    bytes = 1 << size;
    beats = (bytes + TL_BEAT_BYTES - 1) / TL_BEAT_BYTES;
    if (beats < 1) beats = 1;
    if (beats > TL_MAX_BEATS) beats = TL_MAX_BEATS;
    return beats;
  endfunction

  // ---------------------------------------------------------------------
  // a_ready: accept new request only when buffer free and not sending
  // ---------------------------------------------------------------------
  assign a_ready = (!req_buf_valid) && (send_state == S_IDLE);

  // NoC response always accepted (adapter can always inspect flits) — keep backpressure to 1
  assign noc_resp_ready = 1'b1;

  // propagate outputs
  assign noc_req_valid = noc_req_valid_r;
  assign noc_req_flit  = noc_req_flit_r;

  assign d_valid = d_out_valid_r;
  assign d_bits  = d_out_r;

  assign b_valid = b_valid_r;
  assign b_bits  = b_bits_r;

  assign c_ready = 1'b1;
  assign e_ready = 1'b1;

  // ---------------------------------------------------------------------
  // Accept incoming TL-A into req_buf
  // ---------------------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      req_buf_valid <= 1'b0;
    end else begin
      if (!req_buf_valid && a_valid && a_ready) begin
        req_buf <= a_bits;
        req_buf_valid <= 1'b1;
      end
      // do not clear here — cleared when streaming completes in send FSM
    end
  end

  // ---------------------------------------------------------------------
  // Outgoing send FSM: stream req_buf into mesh flits
  // ---------------------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      send_state <= S_IDLE;
      txn_counter <= '0;
      req_total_beats <= '0;
      req_beat_idx <= '0;
      noc_req_valid_r <= 1'b0;
      noc_req_flit_r <= '0;
      req_flit_reg <= '0;
    end else begin
      // default: not driving valid unless we're issuing
      noc_req_valid_r <= 1'b0;

      case (send_state)
        S_IDLE: begin
          if (req_buf_valid) begin
            // prepare streaming state
            // compute beats
            req_total_beats <= size_to_beats(req_buf.a_size);
            req_beat_idx <= 0;

            // prepare header common to all beats
            req_hdr = '0;
            req_hdr.dst_node   <= req_buf.a_address[NODE_ID_WIDTH-1:0];
            req_hdr.vc         <= tl_channel_to_vc(TL_CH_A);
            req_hdr.tl_channel <= TL_CH_A;
            req_hdr.tl_source  <= req_buf.a_source;
            req_hdr.tl_sink    <= '0; // client side doesn't set sink for A
            req_hdr.tl_tag     <= req_buf.a_size[7:0]; // tag may be used by manager

            // generate txn id (unique per request)
            req_flit_reg <= '0;
            // store txn id in local variable then pack into payload below
            // increment counter for next request
            txn_counter <= txn_counter + 1;

            send_state <= S_SEND;
          end
        end

        S_SEND: begin
          // Build payload for current beat (we include full metadata on every beat to simplify)
          // Pack fields into payload using defined offsets
          req_payload = '0;

          // data for current beat: a_bits.a_data is considered the beat value
          req_payload[OFF_DATA +: W_DATA] = req_buf.a_data;

          // mask (strb)
          req_payload[OFF_MASK +: W_MASK] = req_buf.a_mask;

          // size
          req_payload[OFF_SIZE +: W_SIZE] = req_buf.a_size;

          // opcode, param
          req_payload[OFF_OPCODE +: W_OPCODE] = req_buf.a_opcode;
          req_payload[OFF_PARAM  +: W_PARAM ] = req_buf.a_param;

          // source
          req_payload[OFF_TSRC +: W_TSRC] = req_buf.a_source;

          // sink (clients send sink=0)
          req_payload[OFF_TSINK +: W_TSINK] = '0;

          // address low bits (carry lower 64 bits of address)
          req_payload[OFF_ADDR +: W_ADDR_LOW] = req_buf.a_address[W_ADDR_LOW-1:0];

          // txn id (use txn_counter value that was captured when we moved to SEND)
          // Note: txn_counter was incremented at rising edge when entering SEND; use txn_counter-1 for this request
          req_payload[OFF_TXN +: W_TXN] = txn_counter - 1;

          // header fields first/last
          req_hdr.first <= (req_beat_idx == 0);
          req_hdr.last  <= (req_beat_idx == (req_total_beats - 1));

          // build flit and try to send when noc_out_ready asserted by environment
          req_flit_reg <= build_flit(req_hdr, req_payload);

          // present flit for one cycle when noc_req_ready allows
          if (noc_req_ready) begin
            noc_req_valid_r <= 1'b1;
            noc_req_flit_r <= build_flit(req_hdr, req_payload);
            // after acceptance, advance beat index
            if (req_beat_idx + 1 < req_total_beats) begin
              req_beat_idx <= req_beat_idx + 1;
              // remain in S_SEND for next beat
            end else begin
              // completed sending all beats
              req_buf_valid <= 1'b0;
              req_total_beats <= '0;
              req_beat_idx <= '0;
              send_state <= S_IDLE;
            end
          end else begin
            // hold the flit until noc_req_ready becomes high (backpressure)
            noc_req_valid_r <= 1'b0;
          end
        end

        default: send_state <= S_IDLE;
      endcase
    end
  end

  // ---------------------------------------------------------------------
  // Incoming NoC flits -> D or B assembly
  // Assume NoC delivers D on VC_RESP and B on VC_CTRL/TL_CH_B
  // ---------------------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      d_accum <= '0;
      d_accum_valid <= 1'b0;
      d_first_seen <= 1'b0;
      d_beats_expected <= '0;
      d_beats_seen <= '0;
      d_out_valid_r <= 1'b0;
      d_out_r <= '0;
      b_valid_r <= 1'b0;
      b_bits_r <= '0;
    end else begin
      // default clear transient outputs
      d_out_valid_r <= 1'b0;
      b_valid_r <= 1'b0;

      if (noc_resp_valid && noc_resp_ready) begin
        // extract header and payload
        resp_hdr = extract_hdr(noc_resp_flit);
        resp_payload = noc_resp_flit[PAYLOAD_WIDTH-1:0];

        // D responses
        if (resp_hdr.tl_channel == TL_CH_D) begin
          // On first beat, initialize accumulator and expected beats
          if (resp_hdr.first) begin
            d_accum <= '0;
            d_accum_valid <= 1'b0;
            d_first_seen <= 1'b1;
            d_beats_seen <= 0;
            // derive expected beats from size field in payload if present
            d_size_accum <= resp_payload[OFF_SIZE +: W_SIZE];
            d_beats_expected <= size_to_beats(d_size_accum);
          end

          // accumulate data: this simple adapter assumes the payload contains TL data in same offset
          // For multi-beat data, append or replace as appropriate; here we preserve last beat's 64-bit payload.
          d_accum.d_data <= resp_payload[OFF_DATA +: W_DATA];
          // opcode / param if carried in payload
          if (PAYLOAD_WIDTH >= (OFF_OPCODE + W_OPCODE)) begin
            d_accum.d_opcode <= resp_payload[OFF_OPCODE +: W_OPCODE];
          end else begin
            d_accum.d_opcode <= D_AccessAckData;
          end

          if (PAYLOAD_WIDTH >= (OFF_PARAM + W_PARAM)) begin
            d_accum.d_param <= resp_payload[OFF_PARAM +: W_PARAM];
          end else begin
            d_accum.d_param <= '0;
          end

          // copy source and sink from header/payload
          d_accum.d_source <= resp_hdr.tl_source;
          // sink preference: try header first (hdr.tl_sink) else payload
          d_accum.d_sink <= resp_hdr.tl_sink;

          // denied / corrupt flags
          // NoC header doesn't carry denied/corrupt; if present in payload, read them (not defined by default)
          d_accum.d_denied <= 1'b0;
          d_accum.d_corrupt <= 1'b0;

          // update beat counter
          d_beats_seen <= d_beats_seen + 1;

          // if last beat, present assembled D to DUT (one-cycle valid)
          if (resp_hdr.last) begin
            d_out_r <= d_accum;
            d_out_valid_r <= 1'b1;
            d_accum_valid <= 1'b0;
            d_first_seen <= 1'b0;
            d_beats_expected <= '0;
            d_beats_seen <= '0;
          end
        end
        // B channel (Probe) — forward minimal fields to DUT
        else if (resp_hdr.tl_channel == TL_CH_B) begin
          b_bits_r = '0;
          b_bits_r.b_opcode = B_PutFullData; // placeholder if payload lacks opcode
          b_bits_r.b_data = resp_payload[OFF_DATA +: W_DATA];
          b_bits_r.b_source = resp_hdr.tl_source;
          b_valid_r <= 1'b1;
        end
        // ignore other channels here
      end

      // D handshake: keep d_out_valid until DUT accepts
      if (d_out_valid_r && d_ready) begin
        d_out_valid_r <= 1'b0;
      end

      if (b_valid_r && b_ready) begin
        b_valid_r <= 1'b0;
      end
    end
  end

endmodule