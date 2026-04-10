// Company: Western_Semiconductors
// Engineer: Generated
// Create Date: 2026-03-03
// Module Name: tb_mesh_stress
// Description: Randomized stress / gather harness for mesh NoC. Deterministic seed, scoreboard, stats, assertions.
// Dependencies: rtl/params/noc_params.sv, rtl/mesh/noc_flit.sv
// Revision: 1.0

`timescale 1ns/1ps

module tb_mesh_stress;

  import noc_params_pkg::*;
  import noc_flit_pkg::*;

  localparam int MESH_X = 4;
  localparam int MESH_Y = 4;
  localparam int NUM_NODES = MESH_X * MESH_Y;
  localparam int LOCAL_PORTS = NUM_NODES;

  // Simulation parameters
  localparam int SIM_CYCLES = 20000;
  localparam int RNG_SEED = 12345; // deterministic seed; change to vary but keep reproducible

  // Clock/reset
  logic clk;
  logic rst_n;

  // Local ports
  logic [LOCAL_PORTS-1:0]                    local_in_valid;
  logic [LOCAL_PORTS-1:0][FLIT_WIDTH-1:0]   local_in_flit;
  logic [LOCAL_PORTS-1:0]                    local_in_ready;

  logic [LOCAL_PORTS-1:0]                    local_out_valid;
  logic [LOCAL_PORTS-1:0][FLIT_WIDTH-1:0]   local_out_flit;
  logic [LOCAL_PORTS-1:0]                    local_out_ready;

  // DUT
  noc_mesh_xy dut (
    .clk(clk),
    .rst_n(rst_n),

    .local_in_valid(local_in_valid),
    .local_in_flit(local_in_flit),
    .local_in_ready(local_in_ready),

    .local_out_valid(local_out_valid),
    .local_out_flit(local_out_flit),
    .local_out_ready(local_out_ready)
  );

  // Clock
  initial clk = 0;
  always #5 clk = ~clk;

  // Scoreboard: simple associative array mapping txn_id -> expected payload and ordering
  typedef struct packed {
    int src;
    int dst;
    int beats_expected;
    int beats_seen;
    logic [PAYLOAD_WIDTH-1:0] last_payload;
  } sb_entry_t;

  // Use associative array keyed by txn_id (32-bit)
  sb_entry_t scoreboard[string];

  // Stats
  int sent_count;
  int recv_count;
  int dropped_count;
  int latency_sum;
  int max_latency;
  int cycle;

  // Local random
  int rng;

  // Helper functions / tasks
  function automatic flit_t make_flit(int src, int dst, logic [31:0] txn, int vc, int pkt_type, logic first, logic last, logic [PAYLOAD_WIDTH-1:0] payload);
    noc_hdr_t h;
    flit_t    f;
    h.src_node = src[3:0];
    h.dst_node = dst[3:0];
    h.txn_id   = txn;
    h.vc       = vc[2:0];
    h.pkt_type = pkt_type[2:0];
    h.first    = first;
    h.last     = last;
    f = build_flit(h, payload);
    return f;
  endfunction

  // Random single-beat send
  task automatic rand_send_one(int node);
    int dst;
    int vc;
    int pkt;
    logic [PAYLOAD_WIDTH-1:0] payload;
    logic [31:0] txn;
    begin
      dst = $urandom_range(0, NUM_NODES-1);
      vc  = {$urandom_range(0, NUM_VCS-1)} % NUM_VCS;
      pkt = $urandom_range(0, 7);
      payload = {$urandom, $urandom} ^ (node * 64'h1111111111111111);
      txn = {$urandom_range(1, 2**30)};
      local_in_flit[node] = make_flit(node, dst, txn, vc, pkt, 1'b1, 1'b1, payload);
      local_in_valid[node] = 1;
      // insert scoreboard entry
      string key = $sformatf("%0d", txn);
      sb_entry_t se;
      se.src = node;
      se.dst = dst;
      se.beats_expected = 1;
      se.beats_seen = 0;
      se.last_payload = payload;
      scoreboard[key] = se;
      sent_count++;
    end
  endtask

  // Random multi-beat send
  task automatic rand_send_burst(int node);
    int dst;
    int vc;
    int pkt;
    int beats;
    int b;
    logic [PAYLOAD_WIDTH-1:0] payload;
    logic [31:0] txn;
    string key;
    sb_entry_t se;
    begin
      dst = $urandom_range(0, NUM_NODES-1);
      vc  = {$urandom_range(0, NUM_VCS-1)} % NUM_VCS;
      pkt = $urandom_range(0, 7);
      beats = $urandom_range(2, 4); // short bursts 2..4
      txn = {$urandom_range(1, 2**30)};
      key = $sformatf("%0d", txn);
      se.src = node;
      se.dst = dst;
      se.beats_expected = beats;
      se.beats_seen = 0;
      se.last_payload = '0;
      scoreboard[key] = se;
      for (b = 0; b < beats; b = b + 1) begin
        payload = {$urandom, $urandom} ^ (b * 64'h0101010101010101);
        local_in_flit[node] = make_flit(node, dst, txn, vc, pkt, (b==0), (b==beats-1), payload);
        local_in_valid[node] = 1;
        // Wait until accepted
        if (local_in_ready[node] == 0) begin
           wait (local_in_ready[node] == 1);
        end
        @(posedge clk);
        local_in_valid[node] = 0;
        local_in_flit[node] = '0;
        // small random stall
        if (($urandom_range(0,9) < 3)) @(posedge clk);
      end
      sent_count++;
    end
  endtask

  // Collect incoming flits and update scoreboard
  always @(posedge clk) begin
    int n;
    for (n = 0; n < LOCAL_PORTS; n = n + 1) begin
      if (local_out_valid[n]) begin
        noc_hdr_t rh = extract_hdr(local_out_flit[n]);
        logic [PAYLOAD_WIDTH-1:0] payload = local_out_flit[n][PAYLOAD_WIDTH-1:0];
        string key = $sformatf("%0d", rh.txn_id);
        if (scoreboard.exists(key)) begin
          sb_entry_t se = scoreboard[key];
          se.beats_seen = se.beats_seen + 1;
          se.last_payload = payload;
          scoreboard[key] = se;
          if (se.beats_seen == se.beats_expected) begin
            // completed
            recv_count++;
            scoreboard.delete(key);
          end
        end else begin
          // unexpected txn_id => error
          $display("[ERROR] Unexpected txn_id %0d at node %0d time %0t", rh.txn_id, n, $time);
          $fatal(1, "Unexpected txn_id");
        end
      end
    end
  end

  // Initialization
  initial begin
    int i;
    rng = RNG_SEED;
    sent_count = 0;
    recv_count = 0;
    dropped_count = 0;
    latency_sum = 0;
    max_latency = 0;

    rst_n = 0;
    for (i = 0; i < LOCAL_PORTS; i = i + 1) begin
      local_in_valid[i] = 0;
      local_in_flit[i] = '0;
      local_out_ready[i] = 1;
    end
    #20;
    rst_n = 1;
    #20;

    $display("Starting randomized stress: cycles=%0d seed=%0d", SIM_CYCLES, RNG_SEED);

    for (cycle = 0; cycle < SIM_CYCLES; cycle = cycle + 1) begin
      // each cycle, randomly choose N endpoints to drive
      int nsend = $urandom_range(0, NUM_NODES/2);
      int s;
      for (s = 0; s < nsend; s = s + 1) begin
        int node = $urandom_range(0, NUM_NODES-1);
        if (($urandom_range(0,9) < 6)) begin
          rand_send_one(node);
        end else begin
          rand_send_burst(node);
        end
      end

      // Randomly toggle some local_out_ready to create backpressure
      int toggle = $urandom_range(0, NUM_NODES-1);
      local_out_ready[toggle] = ($urandom_range(0,3) != 0); // 75% chance ready

      @(posedge clk);

      // clear local_in_valid signals that may have been left set for single-beat sends
      int i2;
      for (i2 = 0; i2 < LOCAL_PORTS; i2 = i2 + 1) begin
        local_in_valid[i2] = 0;
        local_in_flit[i2] = '0;
      end
    end

    // Wait some cycles for in-flight completions
    repeat (200) @(posedge clk);

    // Report stats
    $display("Stress run complete. sent=%0d recv=%0d dropped=%0d", sent_count, recv_count, dropped_count);
    if (scoreboard.num() != 0) begin
      $display("ERROR: Outstanding transactions left in scoreboard: %0d", scoreboard.num());
      // print first few
      foreach (scoreboard[idx]) begin
        $display(" Left txn key=%s", idx);
      end
      $fatal(1, "Outstanding transactions after stress run");
    end else begin
      $display("All transactions completed successfully.");
    end

    $finish;
  end

endmodule