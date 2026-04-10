// Company: Western_Semiconductors
// Engineer: Generated
// Create Date: 2026-03-03
// Module Name: tb_mesh_directed
// Description: Directed corner-case tests for 4x4 mesh NoC. Assumes noc_mesh_xy exposes LOCAL port arrays.
// Dependencies: rtl/params/noc_params.sv, rtl/mesh/noc_flit.sv
// Revision: 1.0

`timescale 1ns/1ps

module tb_mesh_directed;

  import noc_params_pkg::*;
  import noc_flit_pkg::*;

  // ---- Adaptation points: If your noc_mesh_xy has different port names, change these parameters ----
  localparam int MESH_X = 4;
  localparam int MESH_Y = 4;
  localparam int NUM_NODES = MESH_X * MESH_Y;
  localparam int LOCAL_PORTS = NUM_NODES; // number of LOCAL endpoints exposed by noc_mesh_xy
  // Expected DUT top-level port naming (edit below if your DUT uses different names):
  // clk, rst_n,
  // local_in_valid  : output from endpoint -> input to mesh (array) [LOCAL_PORTS-1:0]
  // local_in_flit   : flit payloads from endpoint -> mesh [LOCAL_PORTS-1:0][FLIT_WIDTH-1:0]
  // local_in_ready  : ready from mesh -> endpoints [LOCAL_PORTS-1:0]
  // local_out_valid : flit output from mesh -> endpoint [LOCAL_PORTS-1:0]
  // local_out_flit  : flit output data from mesh -> endpoint [LOCAL_PORTS-1:0][FLIT_WIDTH-1:0]
  // local_out_ready : ready from endpoint -> mesh [LOCAL_PORTS-1:0]

  // Clock / reset
  logic clk;
  logic rst_n;

  // Local port stimulus/signals
  logic [LOCAL_PORTS-1:0]                     local_in_valid;
  logic [LOCAL_PORTS-1:0][FLIT_WIDTH-1:0]    local_in_flit;
  logic [LOCAL_PORTS-1:0]                     local_in_ready;

  logic [LOCAL_PORTS-1:0]                     local_out_valid;
  logic [LOCAL_PORTS-1:0][FLIT_WIDTH-1:0]    local_out_flit;
  logic [LOCAL_PORTS-1:0]                     local_out_ready;

  // DUT instantiation - adapt port names if necessary
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

  // Simple helpers
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

  // Simple endpoint drivers/tasks
  task automatic send_single_beat(int src_node, int dst_node, int vc, int pkt_type, logic [PAYLOAD_WIDTH-1:0] payload, output int txn_id);
    flit_t f;
    begin
      txn_id = $urandom_range(1, 2**24);
      f = make_flit(src_node, dst_node, txn_id, vc, pkt_type, 1'b1, 1'b1, payload);
      local_in_flit[src_node] = f;
      local_in_valid[src_node] = 1;
      wait (local_in_ready[src_node] == 1);
      @(posedge clk);
      local_in_valid[src_node] = 0;
      local_in_flit[src_node]  = '0;
    end
  endtask

  // Multi-beat packet send (beats <= TL_MAX_BEATS)
  task automatic send_burst(int src_node, int dst_node, int vc, int pkt_type, int beats, logic [PAYLOAD_WIDTH-1:0] first_payload);
    int b;
    flit_t f;
    logic [PAYLOAD_WIDTH-1:0] payload;
    begin
      int txn = $urandom_range(1, 2**24);
      for (b = 0; b < beats; b = b + 1) begin
        payload = first_payload ^ b; // variation per beat
        f = make_flit(src_node, dst_node, txn, vc, pkt_type, (b==0), (b==beats-1), payload);
        local_in_flit[src_node] = f;
        local_in_valid[src_node] = 1;
        wait (local_in_ready[src_node] == 1);
        @(posedge clk);
        local_in_valid[src_node] = 0;
        local_in_flit[src_node]  = '0;
        // small gap to stress reassembly
        repeat (2) @(posedge clk);
      end
    end
  endtask

  // Backpressure toggler for an endpoint (drives local_out_ready)
  task automatic toggle_backpressure(int node, int cycles, int period);
    int i;
    begin
      for (i = 0; i < cycles; i = i + 1) begin
        local_out_ready[node] = (i % period) == 0;
        @(posedge clk);
      end
    end
  endtask

  // Setup
  initial begin
    integer i;
    rst_n = 0;
    for (i = 0; i < LOCAL_PORTS; i = i + 1) begin
      local_in_valid[i] = 0;
      local_in_flit[i]  = '0;
      local_out_ready[i] = 1;
    end
    #20;
    rst_n = 1;
    #20;

    // TEST 1: single-beat delivery node0 -> node5
    $display("[%0t] Directed: single-beat node0->node5", $time);
    int tx0;
    send_single_beat(0, 5, VC_REQ_HIGH, 3'd1, {PAYLOAD_WIDTH{1'b0}} ^ 128'h1122334455667788, tx0);
    repeat (20) @(posedge clk);

    // TEST 2: multi-beat A burst (4 beats) from tile (node 1) -> L3 (node 6)
    $display("[%0t] Directed: multi-beat burst 4 beats node1->node6", $time);
    send_burst(1, 6, VC_REQ_HIGH, 3'd0, 4, 128'hA5A5A5A5A5A5A5A5);
    repeat (40) @(posedge clk);

    // TEST 3: multi-source contention nodes 0,1,2 -> same dst 15
    $display("[%0t] Directed: contention nodes 0,1,2 -> 15", $time);
    fork
      begin send_burst(0, 15, VC_REQ_HIGH, 3'd0, 4, 128'h0101010101010101); end
      begin send_burst(1, 15, VC_REQ_LOW, 3'd0, 4, 128'h0202020202020202);  end
      begin send_burst(2, 15, VC_REQ_HIGH, 3'd0, 4, 128'h0303030303030303); end
    join
    repeat (80) @(posedge clk);

    // TEST 4: backpressure stress: toggle ready on dst node 5 while sending burst
    $display("[%0t] Directed: backpressure stress to node5", $time);
    fork
      begin send_burst(3, 5, VC_REQ_HIGH, 3'd0, 8, 128'hBEEFBEEFBEEFBEEF); end
      begin toggle_backpressure(5, 80, 3); end
    join
    repeat (40) @(posedge clk);

    // TEST 5: VC isolation: send simultaneous different VCs from same src to different dsts
    $display("[%0t] Directed: VC isolation test", $time);
    fork
      send_single_beat(4, 7, VC_REQ_HIGH, 3'd0, 128'h1111, tx0);
      send_single_beat(4, 8, VC_REQ_LOW,  3'd0, 128'h2222, tx0);
      send_single_beat(4, 9, VC_RESP,     3'd5, 128'h3333, tx0);
    join
    repeat (40) @(posedge clk);

    $display("[%0t] Directed tests complete", $time);
    #200;
    $finish;
  end

endmodule