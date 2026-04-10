`timescale 1ns/1ps

module tilelink_system_endpoint (

  input  wire clk,
  input  wire rst,

  // Stimulus inputs (for 16 masters)
  input  wire [15:0]                           a_valid_in,
  input  wire [15:0][2:0]                      a_opcode_in,
  input  wire [15:0][2:0]                      a_param_in,
  input  wire [15:0][63:0]                     a_address_in,
  input  wire [15:0][7:0]                      a_size_in,
  input  wire [15:0][7:0]                      a_mask_in,
  input  wire [15:0][63:0]                     a_data_in,
  input  wire [15:0][2:0]                      a_source_in,
  input  wire [15:0]                           a_corrupt_in,

  // Monitor outputs (from masters)
  output wire [15:0]                           a_valid,
  output wire [15:0][2:0]                      a_opcode,
  output wire [15:0][2:0]                      a_param,
  output wire [15:0][63:0]                     a_address,
  output wire [15:0][7:0]                      a_size,
  output wire [15:0][7:0]                      a_mask,
  output wire [15:0][63:0]                     a_data,
  output wire [15:0][2:0]                      a_source,
  output wire [15:0]                           a_corrupt,

  output wire [15:0]                           d_valid,
  output wire [15:0][2:0]                      d_opcode,
  output wire [15:0][2:0]                      d_param,
  output wire [15:0][7:0]                      d_size,
  output wire [15:0][2:0]                      d_sink,
  output wire [15:0][2:0]                      d_source,
  output wire [15:0][63:0]                     d_data,
  output wire [15:0]                           d_error
);

  import tlc_types_pkg::*;
  import noc_params_pkg::*;

  // ============================================================
  // Mesh System
  // ============================================================

  tl_mesh_system #(
    .MESH_X(4),
    .MESH_Y(4)
  ) mesh_i (
    .clk(clk),
    .rst_n(~rst)
  );

  // ============================================================
  // 16 Masters + Wrappers
  // ============================================================

  genvar i;

  generate
    for (i = 0; i < 16; i++) begin : GEN_MASTERS

      // DUT Master Instance
      tilelink_uh_master_top_fixed master_i (
        .clk(clk),
        .rst(rst),

        .a_valid_in  (a_valid_in[i]),
        .a_opcode_in (a_opcode_in[i]),
        .a_param_in  (a_param_in[i]),
        .a_address_in(a_address_in[i]),
        .a_size_in   (a_size_in[i]),
        .a_mask_in   (a_mask_in[i]),
        .a_data_in   (a_data_in[i]),
        .a_source_in (a_source_in[i]),
        .a_corrupt_in(a_corrupt_in[i]),

        .a_ready     (),  // connected via wrapper
        .a_valid     (a_valid[i]),
        .a_opcode    (a_opcode[i]),
        .a_param     (a_param[i]),
        .a_address   (a_address[i]),
        .a_size      (a_size[i]),
        .a_mask      (a_mask[i]),
        .a_data      (a_data[i]),
        .a_source    (a_source[i]),
        .a_corrupt   (a_corrupt[i]),

        .d_valid     (d_valid[i]),
        .d_ready     (1'b1),
        .d_opcode    (d_opcode[i]),
        .d_param     (d_param[i]),
        .d_size      (d_size[i]),
        .d_sink      (d_sink[i]),
        .d_source    (d_source[i]),
        .d_data      (d_data[i]),
        .d_error     (d_error[i])
      );

      // Wrapper instance (connect master to mesh client adapter)
      tluh_to_tlc_adapter wrapper_i (
        .clk(clk),
        .rst_n(~rst),

        // Connect DUT signals
        .a_valid  (a_valid[i]),
        .a_opcode (a_opcode[i]),
        .a_param  (a_param[i]),
        .a_address(a_address[i]),
        .a_size   (a_size[i]),
        .a_mask   (a_mask[i]),
        .a_data   (a_data[i]),
        .a_source (a_source[i]),
        .a_corrupt(a_corrupt[i]),
        .a_ready  (), // mesh side ready auto-handled

        .d_valid  (d_valid[i]),
        .d_opcode (d_opcode[i]),
        .d_param  (d_param[i]),
        .d_size   (d_size[i]),
        .d_sink   (d_sink[i]),
        .d_source (d_source[i]),
        .d_data   (d_data[i]),
        .d_error  (d_error[i]),
        .d_ready  (1'b1),

        // Connect to mesh client adapter signals
        .client_a_valid(mesh_i.a_client_valid[i]),
        .client_a_bits (mesh_i.a_client_bits[i]),
        .client_a_ready(mesh_i.a_client_ready[i]),

        .client_d_valid(mesh_i.d_client_valid[i]),
        .client_d_bits (mesh_i.d_client_bits[i]),
        .client_d_ready(mesh_i.d_client_ready[i])
      );

    end
  endgenerate

endmodule