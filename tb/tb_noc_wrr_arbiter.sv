`timescale 1ns/1ps

module tb_noc_wrr_arbiter (
  input logic clk
);

  localparam int N = 4;

  logic rst_n;
  logic [N-1:0] req;
  logic [N-1:0] hold;
  logic [15:0]  age [N];
  logic [N-1:0] grant;

  logic [31:0] cycle;
  logic [31:0] grant_count [N];

  // DUT
  noc_wrr_arbiter #(
    .N(N)
  ) dut (
    .clk(clk),
    .rst_n(rst_n),
    .req(req),
    .hold(hold),
    .age(age),
    .grant(grant)
  );

  integer i;

  // Synchronous testbench
  always_ff @(posedge clk) begin

    cycle <= cycle + 1;

    if (cycle == 0) begin
      rst_n <= 0;
      req   <= 0;
      hold  <= 0;
      for (i=0;i<N;i=i+1) begin
        age[i] <= 0;
        grant_count[i] <= 0;
      end
    end

    if (cycle == 5)
      rst_n <= 1;

    // Phase 1: sequential requests
    if (cycle >= 10 && cycle < 30) begin
      req <= 4'b0001;
    end
    else if (cycle >= 30 && cycle < 50) begin
      req <= 4'b0010;
    end
    else if (cycle >= 50 && cycle < 70) begin
      req <= 4'b0100;
    end
    else if (cycle >= 70 && cycle < 90) begin
      req <= 4'b1000;
    end

    // Phase 2: all request simultaneously
    else if (cycle >= 100 && cycle < 200) begin
      req <= 4'b1111;
    end

    // Phase 3: hold on port 1
    else if (cycle >= 220 && cycle < 260) begin
      req  <= 4'b1111;
      hold <= 4'b0010;
    end

    else begin
      req  <= 0;
      hold <= 0;
    end

    // Age increments when requesting
    for (i=0;i<N;i=i+1) begin
      if (req[i])
        age[i] <= age[i] + 1;
    end

    // Count grants
    for (i=0;i<N;i=i+1) begin
      if (grant[i] && req[i])
        grant_count[i] <= grant_count[i] + 1;
    end

    // Finish
    if (cycle == 400) begin
      $display("Arbiter Test Complete");
      for (i=0;i<N;i=i+1)
        $display("Port %0d grants = %0d", i, grant_count[i]);
      $finish;
    end
  end

endmodule