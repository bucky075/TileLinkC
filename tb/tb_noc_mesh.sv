`timescale 1ns/1ps

module tb_noc_mesh (
  input logic clk
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;

  localparam int NUM = MESH_X * MESH_Y;

  logic rst_n;

  logic [NUM-1:0]                    local_in_valid;
  logic [NUM-1:0][FLIT_WIDTH-1:0]    local_in_flit;
  logic [NUM-1:0]                    local_in_ready;

  logic [NUM-1:0]                    local_out_valid;
  logic [NUM-1:0][FLIT_WIDTH-1:0]    local_out_flit;
  logic [NUM-1:0]                    local_out_ready;

  int cycle;

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

  function automatic flit_t make_flit(
    int src, int dst, int txn, int vc
  );
    noc_hdr_t h;
    h.src_node = src[3:0];
    h.dst_node = dst[3:0];
    h.txn_id   = txn;
    h.vc       = vc[2:0];
    h.pkt_type = 3'd0;
    h.first    = 1'b1;
    h.last     = 1'b1;
    return build_flit(h, 80'hABCDABCDABCDABCD);
  endfunction

  always_ff @(posedge clk) begin
    cycle <= cycle + 1;

    if (cycle == 0) begin
      rst_n <= 0;
      local_in_valid <= 0;
      local_out_ready <= '1;
    end

    if (cycle == 5) begin
      rst_n <= 1;
    end

    // Simple packet: node0 -> node5
    if (cycle == 20) begin
      local_in_flit[0]  <= make_flit(0, 5, 32'h1111, VC_REQ_H);
      local_in_valid[0] <= 1;
    end

    if (cycle == 21) begin
      local_in_valid[0] <= 0;
    end

    // Multi-source contention: nodes 1,2,3 -> node 15
    if (cycle == 40) begin
      local_in_flit[1]  <= make_flit(1, 15, 32'h2001, VC_REQ_H);
      local_in_flit[2]  <= make_flit(2, 15, 32'h2002, VC_REQ_L);
      local_in_flit[3]  <= make_flit(3, 15, 32'h2003, VC_REQ_H);
      local_in_valid[1] <= 1;
      local_in_valid[2] <= 1;
      local_in_valid[3] <= 1;
    end

    if (cycle == 41) begin
      local_in_valid[1] <= 0;
      local_in_valid[2] <= 0;
      local_in_valid[3] <= 0;
    end

    // Backpressure on node5
    if (cycle > 60 && cycle < 100) begin
      local_out_ready[5] <= (cycle % 3 != 0);
    end

    if (cycle == 200) begin
      $display("Mesh test complete");
      $finish;
    end
  end

endmodule