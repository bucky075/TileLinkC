`timescale 1ns/1ps
module tl_monitor #(
  parameter int WATCHDOG_THRESHOLD = 2000
)(
  input logic clk,
  input logic rst_n,

  input logic        a_fire,
  input logic [TL_SOURCE_WIDTH-1:0] a_source,

  input logic        d_fire,
  input logic [TL_SOURCE_WIDTH-1:0] d_source,

  input logic [31:0] outstanding_count
);

  import noc_params_pkg::*;

  logic [31:0] cycle_counter;
  logic [31:0] inject_cycle [1<<TL_SOURCE_WIDTH];

  logic [31:0] min_latency;
  logic [31:0] max_latency;
  logic [63:0] total_latency;
  logic [31:0] completed_count;

  logic [31:0] progress_counter;

  integer i;

  // Cycle counter
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      cycle_counter <= 0;
    else
      cycle_counter <= cycle_counter + 1;
  end

  // Latency tracking
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      min_latency <= 32'hFFFFFFFF;
      max_latency <= 0;
      total_latency <= 64'd0;
      completed_count <= 0;
      for (i = 0; i < (1<<TL_SOURCE_WIDTH); i++)
        inject_cycle[i] <= 0;
    end
    else begin
      if (a_fire)
        inject_cycle[a_source] <= cycle_counter;

      if (d_fire) begin
        logic [31:0] latency;
        latency = cycle_counter - inject_cycle[d_source];

        if (latency < min_latency)
          min_latency <= latency;

        if (latency > max_latency)
          max_latency <= latency;

        total_latency <= total_latency + {{32{1'b0}}, latency};
        completed_count <= completed_count + 1;
      end
    end
  end

  // Deadlock watchdog
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      progress_counter <= 0;
    else begin
      if (d_fire)
        progress_counter <= 0;
      else if (outstanding_count > 0)
        progress_counter <= progress_counter + 1;
      else
        progress_counter <= 0;

      if (progress_counter > WATCHDOG_THRESHOLD)
        $fatal("DEADLOCK DETECTED: no forward progress");
    end
  end

endmodule