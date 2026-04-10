`timescale 1ns/1ps

module tb_mesh_gather_stress (
  input  logic clk,
  input  logic rst_n
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  logic [NUM_NODES-1:0]                  local_in_valid;
  logic [NUM_NODES-1:0][FLIT_WIDTH-1:0]  local_in_flit;
  logic [NUM_NODES-1:0]                  local_in_ready;

  logic [NUM_NODES-1:0]                  local_out_valid;
  logic [NUM_NODES-1:0][FLIT_WIDTH-1:0]  local_out_flit;
  logic [NUM_NODES-1:0]                  local_out_ready;

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

  int cycle_counter;
  int packets_injected;
  int node_idx;
  int next_dst;

  noc_hdr_t hdr_reg;

  initial begin
    for (int i = 0; i < NUM_NODES; i++) begin
      local_in_valid[i]  = 0;
      local_in_flit[i]   = '0;
      local_out_ready[i] = 1;
    end

    cycle_counter    = 0;
    packets_injected = 0;
  end

  always @(posedge clk) begin
    if (!rst_n) begin
      cycle_counter    <= 0;
      packets_injected <= 0;
    end
    else begin

      cycle_counter <= cycle_counter + 1;

      node_idx = cycle_counter % NUM_NODES;

      if (packets_injected < 200) begin

        if (local_in_ready[node_idx]) begin

          // compute next destination in int domain
          next_dst = (node_idx + 1) % NUM_NODES;

          // assign safely (explicit slice)
          hdr_reg.src_node = node_idx[$bits(hdr_reg.src_node)-1:0];
          hdr_reg.dst_node = next_dst[$bits(hdr_reg.dst_node)-1:0];

          hdr_reg.txn_id   = packets_injected;
          hdr_reg.vc       = VC_REQ_H[$bits(hdr_reg.vc)-1:0];

          hdr_reg.pkt_type = '0;
          hdr_reg.first    = 1'b1;
          hdr_reg.last     = 1'b1;

          local_in_flit[node_idx]  <= build_flit(hdr_reg, '0);
          local_in_valid[node_idx] <= 1'b1;

          packets_injected <= packets_injected + 1;
        end
        else begin
          local_in_valid[node_idx] <= 1'b0;
        end
      end
      else begin
        local_in_valid[node_idx] <= 1'b0;
      end

      if (cycle_counter > 2000) begin
        $display("---- GATHER DONE ----");
        $display("Packets Injected = %0d", packets_injected);
        $finish;
      end
    end
  end

endmodule