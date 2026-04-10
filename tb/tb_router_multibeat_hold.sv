`timescale 1ns/1ps

module tb_router_multibeat_hold (
  input logic clk,
  input logic rst_n
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;

  localparam PORTS = 5;

  logic [PORTS-1:0] in_valid;
  logic [PORTS-1:0][FLIT_WIDTH-1:0] in_flit;
  logic [PORTS-1:0] in_ready;

  logic [PORTS-1:0] out_valid;
  logic [PORTS-1:0][FLIT_WIDTH-1:0] out_flit;
  logic [PORTS-1:0] out_ready;

  noc_router_xy_vc #(
    .X(0),
    .Y(0)
  ) dut (
    .clk(clk),
    .rst_n(rst_n),
    .in_valid(in_valid),
    .in_flit(in_flit),
    .in_ready(in_ready),
    .out_valid(out_valid),
    .out_flit(out_flit),
    .out_ready(out_ready)
  );

  int cycle;
  noc_hdr_t hdr;

  initial begin
    for (int i = 0; i < PORTS; i++) begin
      in_valid[i]  = 0;
      in_flit[i]   = '0;
      out_ready[i] = 1;
    end
    cycle = 0;
  end

  always @(posedge clk) begin
    if (!rst_n) begin
      cycle <= 0;
      in_valid <= '0;
    end else begin
      cycle <= cycle + 1;

      // 3-beat packet on LOCAL (port 4), VC 0
      if (cycle >= 2 && cycle <= 4) begin
        if (in_ready[4]) begin
          hdr.dst_node   = 0;
          hdr.vc         = 3'd0;

          hdr.tl_channel = TL_CH_A;
          hdr.tl_source  = 8'd0;
          hdr.tl_sink    = 8'd0;
          hdr.tl_tag     = 8'd1;

          hdr.first      = (cycle == 2);
          hdr.last       = (cycle == 4);

          in_flit[4]  <= build_flit(hdr, flit_payload_t'(cycle));
          in_valid[4] <= 1;
        end
      end else begin
        in_valid[4] <= 0;
      end

      // Competing traffic on VC 1
      if (cycle >= 2 && cycle <= 10) begin
        if (in_ready[3]) begin
          hdr.dst_node   = 0;
          hdr.vc         = 3'd1;

          hdr.tl_channel = TL_CH_A;
          hdr.tl_source  = 8'd1;
          hdr.tl_sink    = 8'd0;
          hdr.tl_tag     = cycle[7:0];

          hdr.first      = 1'b1;
          hdr.last       = 1'b1;

          in_flit[3]  <= build_flit(hdr, flit_payload_t'(cycle));
          in_valid[3] <= 1;
        end
      end else begin
        in_valid[3] <= 0;
      end

      if (cycle > 30) begin
        $display("Multibeat hold test complete.");
        $finish;
      end
    end
  end

endmodule