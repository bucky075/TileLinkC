`timescale 1ns/1ps
module noc_fifo #(
  parameter int WIDTH = 128,
  parameter int DEPTH = 8
)(
  input  logic clk,
  input  logic rst_n,
  input  logic push,
  input  logic [WIDTH-1:0] din,
  output logic full,
  input  logic pop,
  output logic [WIDTH-1:0] dout,
  output logic empty,
  output logic [$clog2(DEPTH+1)-1:0] count,
  output logic [$clog2(DEPTH+1)-1:0] free_slots
);

  localparam int PTR_W = (DEPTH > 1) ? $clog2(DEPTH) : 1;
  localparam int CNT_W = (DEPTH > 1) ? $clog2(DEPTH+1) : 1;

  logic [WIDTH-1:0] mem [0:DEPTH-1];

  logic [PTR_W-1:0] wr_ptr;
  logic [PTR_W-1:0] rd_ptr;
  logic [CNT_W-1:0] cnt;

  logic do_push;
  logic do_pop;

  assign empty = (cnt == 0);
  assign full  = (int'(cnt) == DEPTH);

  assign count = cnt;

  logic [CNT_W-1:0] free_tmp;

  always_comb begin
    int free_i;

    do_push = push && !full;
    do_pop  = pop  && !empty;

    free_i = DEPTH - int'(cnt);
    free_tmp = free_i[CNT_W-1:0];
  end

  assign free_slots = free_tmp;

  assign dout = mem[rd_ptr];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_ptr <= '0;
      rd_ptr <= '0;
      cnt    <= '0;
    end else begin

      if (do_push) begin
        mem[wr_ptr] <= din;

        if (int'(wr_ptr) == DEPTH-1)
          wr_ptr <= '0;
        else
          wr_ptr <= wr_ptr + 1;
      end

      if (do_pop) begin
        if (int'(rd_ptr) == DEPTH-1)
          rd_ptr <= '0;
        else
          rd_ptr <= rd_ptr + 1;
      end

      case ({do_push, do_pop})
        2'b10: cnt <= cnt + 1;
        2'b01: cnt <= cnt - 1;
        default: cnt <= cnt;
      endcase
    end
  end

endmodule