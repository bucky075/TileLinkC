`timescale 1ns/1ps
module tb_noc_fifo(input logic clk);

  import noc_params_pkg::*;

  logic rst_n;
  logic push, pop;
  logic [127:0] din;
  logic [127:0] dout;
  logic full, empty;
  integer results_fd;
  int cycle;

  noc_fifo #(.WIDTH(128), .DEPTH(4)) dut (
    .clk(clk), .rst_n(rst_n),
    .push(push), .din(din), .full(full),
    .pop(pop), .dout(dout), .empty(empty),
    .count(), .free_slots()
  );

  initial begin
    results_fd = $fopen("results/fifo.results","w");
  end

  always_ff @(posedge clk) begin
    cycle <= cycle + 1;

    if (cycle==0) begin
      rst_n<=0; push<=0; pop<=0; din<=0;
    end
    if (cycle==5) rst_n<=1;

    if (cycle>=10 && cycle<14) begin
      push<=1; din<=cycle;
      $fwrite(results_fd,"Push %0d\n",cycle);
    end else push<=0;

    if (cycle>=20 && cycle<24) pop<=1;
    else pop<=0;

    if (cycle==60) begin
      $display("FIFO test complete");
      $fclose(results_fd);
      $finish;
    end
  end
endmodule