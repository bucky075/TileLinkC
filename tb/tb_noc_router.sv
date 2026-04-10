`timescale 1ns/1ps

module tb_noc_router (
  input logic clk
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;

  logic rst_n;

  logic [4:0] in_valid;
  logic [4:0][FLIT_WIDTH-1:0] in_flit;
  logic [4:0] in_ready;

  logic [4:0] out_valid;
  logic [4:0][FLIT_WIDTH-1:0] out_flit;
  logic [4:0] out_ready;

  int cycle;

  noc_router_xy_vc #(.X(0), .Y(0)) dut (
    .clk(clk),
    .rst_n(rst_n),
    .in_valid(in_valid),
    .in_flit(in_flit),
    .in_ready(in_ready),
    .out_valid(out_valid),
    .out_flit(out_flit),
    .out_ready(out_ready)
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
    return build_flit(h, 80'hCAFEBABE);
  endfunction

  always_ff @(posedge clk) begin
    cycle <= cycle + 1;

    if (cycle == 0) begin
      rst_n <= 0;
      in_valid <= 0;
      out_ready <= 5'b11111;
    end

    if (cycle == 5) begin
      rst_n <= 1;
    end

    // Inject packet at LOCAL port (port 4)
    if (cycle == 10) begin
      in_flit[4]  <= make_flit(0, 1, 32'h1234, VC_REQ_H);
      in_valid[4] <= 1;
    end

    if (cycle == 11) begin
      in_valid[4] <= 0;
    end

    if (cycle == 50) begin
      $display("Router test complete");
      $finish;
    end
  end

endmodule