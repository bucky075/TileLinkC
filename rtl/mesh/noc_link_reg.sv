`timescale 1ns/1ps
module noc_link_reg #(
  parameter int FLIT_W = 128
)(
  input  logic clk,
  input  logic rst_n,

  // upstream -> this link
  input  logic                     in_valid,
  input  logic [FLIT_W-1:0]        in_flit,
  output logic                     in_ready,

  // downstream side (after register)
  output logic                     out_valid,
  output logic [FLIT_W-1:0]        out_flit,
  input  logic                     out_ready
);

  // single-flit pipeline register with valid
  logic                         r_valid;
  logic [FLIT_W-1:0]            r_flit;

  // ready to accept when pipeline empty or will be consumed this cycle
  assign in_ready = !r_valid || (out_ready && r_valid);

  // output driven by register
  assign out_valid = r_valid;
  assign out_flit  = r_flit;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      r_valid <= 1'b0;
      r_flit  <= '0;
    end else begin
      // if downstream consumed available data this cycle, we can replace it
      if (r_valid && out_ready) begin
        r_valid <= 1'b0;
        r_flit  <= '0;
      end

      // capture new upstream when pipeline free (or consumed this cycle)
      if (in_valid && in_ready) begin
        r_valid <= 1'b1;
        r_flit  <= in_flit;
      end
    end
  end

endmodule