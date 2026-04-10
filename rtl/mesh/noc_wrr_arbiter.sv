`timescale 1ns/1ps
module noc_wrr_arbiter #(
  parameter int N = 4,
  parameter int WEIGHTS [N] = '{default:1}
)(
  input  logic         clk,
  input  logic         rst_n,
  input  logic [N-1:0] req,
  input  logic [N-1:0] hold,
  output logic [N-1:0] grant
);

  localparam int PTR_W = (N > 1) ? $clog2(N) : 1;

  logic [PTR_W-1:0] rr_ptr;
  logic [N-1:0]     grant_comb;

  always_comb begin
    grant_comb = '0;

    for (int k = 0; k < N; k++) begin
      int idx_int;

      idx_int = int'(rr_ptr) + k;
      if (idx_int >= N)
        idx_int = idx_int - N;

      if (req[idx_int]) begin
        grant_comb[idx_int] = 1'b1;
        break;
      end
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      rr_ptr <= '0;
      grant  <= '0;
    end else begin
      if (| (grant & hold)) begin
        grant <= grant;
      end else begin
        grant <= grant_comb;

        if (|grant_comb) begin
          int next_ptr_int;

          next_ptr_int = int'(rr_ptr) + 1;
          if (next_ptr_int >= N)
            next_ptr_int = next_ptr_int - N;

          rr_ptr <= next_ptr_int[PTR_W-1:0];
        end
      end
    end
  end

endmodule