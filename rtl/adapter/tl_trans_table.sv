`timescale 1ns/1ps
module tl_trans_table #(
  parameter int MAX_ENTRIES = 16
)(
  input  logic clk,
  input  logic rst_n,

  // params come from packages (imported by users)
  // Allocate request: manager calls to reserve an entry for an incoming A
  input  logic                  alloc_req_valid,
  input  logic [TL_SOURCE_WIDTH-1:0] alloc_req_source,
  input  logic [$clog2(TL_MAX_BEATS+1)-1:0] alloc_req_beats, // number of beats expected (1..TL_MAX_BEATS)
  output logic                  alloc_req_ready,
  output logic [TL_SINK_WIDTH-1:0] alloc_sink, // assigned sink id
  output logic                  alloc_sink_valid,

  // Beat update: manager calls to increment beats seen for a sink
  input  logic                  beat_inc_valid,
  input  logic [TL_SINK_WIDTH-1:0] beat_inc_sink,
  // When beat_complete pulses, the entry is freed (if beats_seen == beats_total)
  output logic                  beat_complete_valid,
  output logic [TL_SINK_WIDTH-1:0] beat_complete_sink,

  // Force free (external request) — optional: free by sink (e.g., on explicit Release)
  input  logic                  free_req_valid,
  input  logic [TL_SINK_WIDTH-1:0] free_req_sink,

  // Status outputs
  output logic                  table_full,
  output logic [$clog2(MAX_ENTRIES+1)-1:0] used_count,

  // Diagnostics (optional)
  output logic [31:0] diag_used_by_source [(1<<TL_SOURCE_WIDTH) - 1:0]
);

  import noc_params_pkg::*;
  import tlc_types_pkg::*;

  // internal entry representation
  typedef struct packed {
    logic                         valid;
    logic [TL_SOURCE_WIDTH-1:0]   source;
    logic [TL_SINK_WIDTH-1:0]     sink;
    logic [$clog2(TL_MAX_BEATS+1)-1:0] beats_total;
    logic [$clog2(TL_MAX_BEATS+1)-1:0] beats_seen;
  } entry_t;

  // arrays sized by MAX_ENTRIES
  entry_t table [MAX_ENTRIES];

  // simple free-pointer and used count
  logic [$clog2(MAX_ENTRIES+1)-1:0] used_cnt;
  logic [$clog2(MAX_ENTRIES)-1:0]   next_alloc_idx; // pointer to search start

  // per-source outstanding counters (diagnostic + ordering enforcement)
  // diag_used_by_source sized to 2^TL_SOURCE_WIDTH; ensure sizing via parameter from packages
  // initialize diagnostics in reset
  // We need a static sized array; declare as above and initialize in reset below.

  // outputs defaults
  always_comb begin
    alloc_req_ready    = (used_cnt < MAX_ENTRIES);
    alloc_sink_valid   = 1'b0;
    alloc_sink         = '0;
    beat_complete_valid = 1'b0;
    beat_complete_sink  = '0;
    table_full         = (used_cnt >= MAX_ENTRIES);
    used_count         = used_cnt;
  end

  // synchronous behavior
  integer i;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      used_cnt <= '0;
      next_alloc_idx <= '0;
      for (i = 0; i < MAX_ENTRIES; i++) begin
        table[i].valid <= 1'b0;
        table[i].source <= '0;
        table[i].sink <= i[TL_SINK_WIDTH-1:0]; // default sink id = index (safe)
        table[i].beats_total <= '0;
        table[i].beats_seen  <= '0;
      end

      // diagnostics zero
      for (int s = 0; s < (1<<TL_SOURCE_WIDTH); s++) begin
        diag_used_by_source[s] <= 32'd0;
      end
    end else begin
      // Handle free_req first (explicit frees)
      if (free_req_valid) begin
        // find matching entry
        for (i = 0; i < MAX_ENTRIES; i++) begin
          if (table[i].valid && table[i].sink == free_req_sink) begin
            // decrement diagnostic counter
            if (diag_used_by_source[table[i].source] > 0)
              diag_used_by_source[table[i].source] <= diag_used_by_source[table[i].source] - 1;
            table[i].valid <= 1'b0;
            table[i].beats_total <= '0;
            table[i].beats_seen  <= '0;
            if (used_cnt > 0) used_cnt <= used_cnt - 1;
            // keep next_alloc_idx as-is (we scan)
            break;
          end
        end
      end

      // Handle beat increment signal: increment beats_seen for that sink
      if (beat_inc_valid) begin
        for (i = 0; i < MAX_ENTRIES; i++) begin
          if (table[i].valid && table[i].sink == beat_inc_sink) begin
            // increment beats_seen (saturate to beats_total)
            if (table[i].beats_seen < table[i].beats_total) begin
              table[i].beats_seen <= table[i].beats_seen + 1;
            end
            // if hits total, free the entry and report completion
            if (table[i].beats_seen + 1 >= table[i].beats_total) begin
              // this beat finishes the transaction
              beat_complete_valid <= 1'b1;
              beat_complete_sink  <= table[i].sink;
              // free entry
              if (diag_used_by_source[table[i].source] > 0)
                diag_used_by_source[table[i].source] <= diag_used_by_source[table[i].source] - 1;
              table[i].valid <= 1'b0;
              table[i].beats_total <= '0;
              table[i].beats_seen  <= '0;
              if (used_cnt > 0) used_cnt <= used_cnt - 1;
            end
            break;
          end
        end
      end

      // Handle alloc request (only if room)
      if (alloc_req_valid && (used_cnt < MAX_ENTRIES)) begin
        // find free slot starting at next_alloc_idx
        int found;
        found = -1;
        for (i = 0; i < MAX_ENTRIES; i++) begin
          int idx;
          idx = (next_alloc_idx + i) % MAX_ENTRIES;
          if (!table[idx].valid) begin
            found = idx;
            break;
          end
        end
        if (found != -1) begin
          table[found].valid <= 1'b1;
          table[found].source <= alloc_req_source;
          // choose sink id as index truncated to sink width
          table[found].sink <= found[TL_SINK_WIDTH-1:0];
          table[found].beats_total <= alloc_req_beats;
          table[found].beats_seen  <= 1'b0;
          used_cnt <= used_cnt + 1;
          // diagnostic inc
          diag_used_by_source[alloc_req_source] <= diag_used_by_source[alloc_req_source] + 1;
          // return allocation outputs (registered via combinational above; set via blocking below)
          alloc_sink_valid <= 1'b1;
          alloc_sink <= table[found].sink;
          // advance next_alloc_idx
          next_alloc_idx <= (found + 1) % MAX_ENTRIES;
        end
      end

    end // !rst_n
  end // always_ff

endmodule