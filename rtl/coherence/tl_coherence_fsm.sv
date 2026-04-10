`timescale 1ns/1ps
// rtl/coherence/tl_coherence_fsm.sv
// Simple per-manager coherence FSM / sink allocator.
//
// Responsibilities (minimal, but TL-correct in the common cases):
//  - Allocate sink IDs for incoming A requests.
//  - Track per-sink state: I (invalid), S (shared), M (modified).
//  - Enforce single-outstanding-per-source (simple per-source busy bit).
//  - Produce D responses (Grant / GrantData / AccessAck) synchronously
//    via a handshake (issue_d_valid + issue_d_ready).
//  - Accept sink release notifications (release_sink_valid/id).
//  - Expose used_count for external backpressure.
//
// Notes:
//  - This FSM is intentionally simple: it issues single-beat D responses
//    filled with placeholder data (zero) where real memory data would
//    be returned by a backing store/manager. Integrate with your real
//    data provider by hooking the produced sink id -> fetch data path.
//  - Extendable: probes / B/C/E sequences can be added by driving the
//    appropriate outputs from this module.

module tl_coherence_fsm #(
  // Parameterize widths — by default use noc_params_pkg values.
  parameter int TL_ADDR_WIDTH   = 48,
  parameter int TL_DATA_WIDTH   = 128,
  parameter int TL_SOURCE_WIDTH = 8,
  parameter int TL_SINK_WIDTH   = 3,   // number of sink bits
  parameter int MAX_SINKS = (1 << TL_SINK_WIDTH)
)(
  input  logic                     clk,
  input  logic                     rst_n,

  // Incoming A request from manager adapter (handshake)
  input  logic                     a_req_valid,
  input  tlc_types_pkg::tl_a_t    a_req_bits,
  output logic                     a_req_accept,   // FSM accepts and allocates (backpressure)

  // Produce D response to manager adapter (handshake)
  output logic                     d_issue_valid,
  output tlc_types_pkg::tl_d_t    d_issue_bits,
  input  logic                     d_issue_ready,   // manager accepted/issued D

  // External release (called when D/E indicates sink can be freed)
  input  logic                     release_sink_valid,
  input  logic [TL_SINK_WIDTH-1:0] release_sink_id,

  // Status / debug outputs
  output logic [$clog2(MAX_SINKS+1)-1:0] used_count_out
);

  import tlc_types_pkg::*;
  import noc_params_pkg::*;

  // --- local types ---
  typedef enum logic [1:0] { C_I = 2'd0, C_S = 2'd1, C_M = 2'd2 } coh_state_t;

  // sink table
  logic                              sink_valid      [MAX_SINKS];
  coh_state_t                        sink_state      [MAX_SINKS];
  logic [TL_SOURCE_WIDTH-1:0]        sink_owner      [MAX_SINKS];
  logic [$clog2(MAX_SINKS+1)-1:0]    used_count;

  // per-source outstanding indicator (single-outstanding-per-source guarantee)
  logic [TL_SOURCE_WIDTH-1:0]        last_source; // not used for table but kept for debug
  logic                              src_busy       [ (1<<TL_SOURCE_WIDTH) ];

  // simple allocator pointer (round-robin)
  int unsigned alloc_ptr;

  // default outputs
  assign used_count_out = used_count;

  // Initialize
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < MAX_SINKS; i++) begin
        sink_valid[i] <= 1'b0;
        sink_state[i] <= C_I;
        sink_owner[i] <= '0;
      end
      for (int s = 0; s < (1<<TL_SOURCE_WIDTH); s++) src_busy[s] <= 1'b0;
      used_count <= '0;
      alloc_ptr <= 0;
    end else begin
      // process release notifications: free sink
      if (release_sink_valid) begin
        logic [TL_SINK_WIDTH-1:0] rs;
        rs = release_sink_id;
        if (rs < MAX_SINKS) begin
          if (sink_valid[rs]) begin
            // clear sink and mark owner not busy
            src_busy[ sink_owner[rs] ] <= 1'b0;
            sink_valid[rs] <= 1'b0;
            sink_state[rs] <= C_I;
            sink_owner[rs] <= '0;
            if (used_count > 0) used_count <= used_count - 1;
          end
        end
      end

      // process acceptance of allocated D by seeing d_issue_ready + d_issue_valid
      // handled below in combinational block when d_issue_ready asserted,
      // so nothing extra required here.
    end
  end

  // Helper: find free sink index (combinational)
  function automatic int find_free_sink();
    int found;
    found = -1;
    for (int i = 0; i < MAX_SINKS; i++) begin
      int idx = (alloc_ptr + i) % MAX_SINKS;
      if (!sink_valid[idx]) begin
        found = idx;
        break;
      end
    end
    return found;
  endfunction

  // --- Main combinational acceptance / D production logic ---
  // Decide whether to accept incoming A and create a D to return to the manager.
  // This block does not change persistent tables directly; updates happen on clk.
  logic [TL_SINK_WIDTH-1:0]     chosen_sink;
  logic                         can_accept;
  tlc_types_pkg::tl_d_t         d_out_local;
  logic                         produce_d;

  always_comb begin
    // defaults
    a_req_accept = 1'b0;
    d_issue_valid = 1'b0;
    d_issue_bits = '0;
    d_out_local = '0;
    produce_d = 1'b0;
    chosen_sink = '0;
    can_accept = 1'b0;

    // if incoming request valid, see if we can accept:
    if (a_req_valid) begin
      // check per-source single outstanding
      logic [TL_SOURCE_WIDTH-1:0] src;
      src = a_req_bits.a_source;

      // if source busy, do not accept
      if (src_busy[src]) begin
        can_accept = 1'b0;
      end else begin
        // find free sink
        int f = find_free_sink();
        if (f >= 0) begin
          can_accept = 1'b1;
          chosen_sink = f[TL_SINK_WIDTH-1:0];
        end else begin
          can_accept = 1'b0;
        end
      end

      if (can_accept) begin
        // We will accept; prepare a D response
        a_req_accept = 1'b1;

        // Map A opcode -> D response opcode (simplified):
        // - A_Get  -> D_AccessAckData (AccessAckData) if dataful, else AccessAck
        // - A_Put* / A_Acquire* -> D_GrantData (if data) or D_Grant
        // - A_Hint -> AccessAck
        //
        // Use tlc_types_pkg constants
        case (a_req_bits.a_opcode)
          A_Get: begin
            // return data (GrantData vs AccessAckData semantics vary; we pick AccessAckData)
            d_out_local.d_opcode = D_AccessAckData;
            d_out_local.d_data   = '0; // placeholder; real data provider should fill this
          end
          A_PutFullData, A_PutPartialData,
          A_AcquireBlock, A_AcquirePerm: begin
            d_out_local.d_opcode = D_GrantData;
            d_out_local.d_data   = '0;
          end
          A_ArithmeticData, A_LogicalData: begin
            d_out_local.d_opcode = D_AccessAckData;
            d_out_local.d_data   = '0;
          end
          A_Hint: begin
            d_out_local.d_opcode = D_HintAck;
            d_out_local.d_data   = '0;
          end
          default: begin
            d_out_local.d_opcode = D_AccessAck;
            d_out_local.d_data   = '0;
          end
        endcase

        // common fields
        d_out_local.d_source = a_req_bits.a_source;
        d_out_local.d_param  = '0;
        d_out_local.d_size   = a_req_bits.a_size;
        d_out_local.d_denied = 1'b0;
        d_out_local.d_corrupt= 1'b0;

        // attach sink id we will allocate (manager uses this to forward to DUT)
        d_out_local.d_sink   = chosen_sink;

        // mark produce D
        produce_d = 1'b1;
        d_issue_bits = d_out_local;
        d_issue_valid = produce_d;
      end
    end
  end

  // --- On handshake (d_issue_ready && d_issue_valid) commit table updates ---
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      // no-op (already initialized above)
    end else begin
      if (a_req_valid && a_req_accept && d_issue_valid && d_issue_ready) begin
        // commit allocation: set sink valid, owner, state, src busy, bump used_count
        sink_valid[ chosen_sink ] <= 1'b1;
        sink_owner[ chosen_sink ] <= a_req_bits.a_source;
        // set state depending on opcode:
        case (a_req_bits.a_opcode)
          A_Get: sink_state[ chosen_sink ] <= C_S;
          A_PutFullData, A_PutPartialData,
          A_AcquireBlock, A_AcquirePerm: sink_state[ chosen_sink ] <= C_M;
          default: sink_state[ chosen_sink ] <= C_S;
        endcase
        // mark source busy
        src_busy[ a_req_bits.a_source ] <= 1'b1;

        // increment used_count and advance allocator
        if (used_count < MAX_SINKS) used_count <= used_count + 1;
        alloc_ptr <= (chosen_sink + 1) % MAX_SINKS;
      end
    end
  end

  // Safety assertions (lightweight)
  // used_count should never exceed MAX_SINKS
  // per-source busy should be consistent with sink_owner entries: too heavy to assert exhaustively here.

  // Expose d_issue_bits output port
  // done by combinational 'd_issue_bits' assignment above

endmodule