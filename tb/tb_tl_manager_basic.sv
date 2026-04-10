`timescale 1ns/1ps
// tb/tb_tl_manager_basic.sv
module tb_tl_manager_basic;
  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  logic clk;
  logic rst_n;

  logic                     noc_in_valid;
  logic [FLIT_WIDTH-1:0]    noc_in_flit;
  logic                     noc_in_ready;

  logic                     noc_out_valid;
  logic [FLIT_WIDTH-1:0]    noc_out_flit;
  logic                     noc_out_ready;

  logic [$clog2((1<<TL_SINK_WIDTH)+1)-1:0] used_count_out;
  logic [31:0] requests_received;
  logic [31:0] responses_sent;
  logic [63:0] total_latency;

  // DUT
  tl_manager_adapter #(.NODE_ID(0)) dut (
    .clk(clk),
    .rst_n(rst_n),
    .noc_in_valid(noc_in_valid),
    .noc_in_flit(noc_in_flit),
    .noc_in_ready(noc_in_ready),
    .noc_out_valid(noc_out_valid),
    .noc_out_flit(noc_out_flit),
    .noc_out_ready(noc_out_ready),
    .used_count_out(used_count_out),
    .requests_received(requests_received),
    .responses_sent(responses_sent),
    .total_latency(total_latency)
  );

  // clock
  initial begin
    clk = 0;
    forever #5 clk = ~clk; // 10ns period
  end

  // stim/monitor
  initial begin
    // defaults
    rst_n = 0;
    noc_in_valid = 0;
    noc_in_flit = '0;
    noc_out_ready = 1;

    // reset
    #20;
    rst_n = 1;
    #20;

    $display("[%0t] TB: Reset released", $time);

    // Inject A from source 1 (3-beat)
    // Build header with tl_channel = TL_CH_A, tl_source = 1
    noc_in_flit = '0;
    noc_in_flit = build_flit('{dst_node:0, vc:VC_REQ_H, tl_channel:TL_CH_A, tl_source:1, tl_sink:0, tl_tag:8'hAA, first:1, last:1},
                             '0);
    // Note: payload size field is not stuffed; manager uses payload low bits for size in its simple mapper.
    noc_in_valid = 1;
    #10;
    noc_in_valid = 0;
    $display("[%0t] TB: injected A (src=1)", $time);

    // wait a few cycles
    #30;

    // Inject A from source 2 (single beat)
    noc_in_flit = '0;
    noc_in_flit = build_flit('{dst_node:0, vc:VC_REQ_L, tl_channel:TL_CH_A, tl_source:2, tl_tag:8'hBB, first:1, last:1},
                             '0);
    noc_in_valid = 1;
    #10;
    noc_in_valid = 0;
    $display("[%0t] TB: injected A (src=2)", $time);

    #50;

    // Inject a C (client->manager probe) from source 3
    noc_in_flit = '0;
    noc_in_flit = build_flit('{dst_node:0, vc:VC_CTRL, tl_channel:TL_CH_C, tl_source:3, tl_tag:8'hCC, first:1, last:1}, '0);
    noc_in_valid = 1;
    #10;
    noc_in_valid = 0;
    $display("[%0t] TB: injected C (src=3)", $time);

    #100;

    // Inject an explicit E to free sink 0 (simulate client finishing)
    noc_in_flit = '0;
    noc_in_flit = build_flit('{dst_node:0, vc:VC_CTRL, tl_channel:TL_CH_E, tl_source:1, tl_sink:0, first:1, last:1}, '0);
    noc_in_valid = 1;
    #10;
    noc_in_valid = 0;
    $display("[%0t] TB: injected E (free sink 0)", $time);

    #100;
    $display("[%0t] TB complete: requests=%0d responses=%0d used_count=%0d total_latency=%0d",
             $time, requests_received, responses_sent, used_count_out, total_latency);
    $finish;
  end

  // monitor D outputs
  always @(posedge clk) begin
    if (noc_out_valid && noc_out_ready) begin
      $display("[%0t] TB: saw noc_out_valid (flit low[31:0]=%08x) used_count=%0d",
               $time, noc_out_flit[31:0], used_count_out);
    end
  end

endmodule