`timescale 1ns/1ps
module tluh_master_node #(
  parameter int TL_ADDR_WIDTH   = noc_params_pkg::TL_ADDR_WIDTH,
  parameter int TL_DATA_WIDTH   = noc_params_pkg::TL_DATA_WIDTH,
  parameter int TL_STRB_WIDTH   = TL_DATA_WIDTH/8,
  parameter int TL_BEAT_WIDTH   = noc_params_pkg::TL_BEAT_BYTES,
  parameter int BEAT_LOG2       = $clog2(TL_BEAT_WIDTH),
  parameter int TL_SOURCE_WIDTH = noc_params_pkg::TL_SOURCE_WIDTH,
  parameter int TL_SINK_WIDTH   = noc_params_pkg::TL_SINK_WIDTH,
  parameter int TL_OPCODE_WIDTH = noc_params_pkg::TL_OPCODE_WIDTH,
  parameter int TL_PARAM_WIDTH  = noc_params_pkg::TL_PARAM_WIDTH,
  parameter int TL_SIZE_WIDTH   = noc_params_pkg::TL_SIZE_WIDTH
)(
  input  logic                        clk,
  input  logic                        rst_n,         // active-low system reset

  // client-adapter side (A out, D in)
  output logic                        a_valid_out,
  output tlc_types_pkg::tl_a_t        a_bits_out,
  input  logic                        a_ready_in,

  input  logic                        d_valid_in,
  input  tlc_types_pkg::tl_d_t        d_bits_in,
  output logic                        d_ready_out
);

  import noc_params_pkg::*;
  import tlc_types_pkg::*;

  // --- internal flat signals to/from provided master ---
  logic                                master_a_ready;
  logic                                master_a_valid;
  logic [TL_OPCODE_WIDTH-1:0]          master_a_opcode;
  logic [TL_PARAM_WIDTH-1:0]           master_a_param;
  logic [TL_SIZE_WIDTH-1:0]            master_a_size;
  logic [TL_ADDR_WIDTH-1:0]            master_a_address;
  logic [TL_STRB_WIDTH-1:0]            master_a_mask;
  logic [TL_DATA_WIDTH-1:0]            master_a_data;
  logic [TL_SOURCE_WIDTH-1:0]          master_a_source;
  logic                                master_a_corrupt;

  logic                                master_d_valid;
  logic                                master_d_ready;
  logic [TL_OPCODE_WIDTH-1:0]          master_d_opcode;
  logic [TL_PARAM_WIDTH-1:0]           master_d_param;
  logic [TL_SIZE_WIDTH-1:0]            master_d_size;
  logic [TL_SINK_WIDTH-1:0]            master_d_sink;
  logic [TL_SOURCE_WIDTH-1:0]          master_d_source;
  logic [TL_DATA_WIDTH-1:0]            master_d_data;
  logic                                master_d_error;

  // connect wrapper <-> client adapter
  assign master_a_ready = a_ready_in;
  assign a_valid_out    = master_a_valid;

  assign d_ready_out    = master_d_ready;

  // pack/unpack between structs and flat signals
  always_comb begin
    a_bits_out = '0;
    a_bits_out.a_opcode  = master_a_opcode;
    a_bits_out.a_param   = master_a_param;
    a_bits_out.a_size    = master_a_size;
    a_bits_out.a_address = master_a_address;
    a_bits_out.a_mask    = master_a_mask;
    a_bits_out.a_data    = master_a_data;
    a_bits_out.a_source  = master_a_source;
    a_bits_out.a_corrupt = master_a_corrupt;

    // D direction: flatten tl_d_t into master_d_* signals
    master_d_valid  = d_valid_in;
    master_d_opcode = d_bits_in.d_opcode;
    master_d_param  = d_bits_in.d_param;
    master_d_size   = d_bits_in.d_size;
    master_d_sink   = d_bits_in.d_sink;
    master_d_source = d_bits_in.d_source;
    master_d_data   = d_bits_in.d_data;
    master_d_error  = d_bits_in.d_denied | d_bits_in.d_corrupt;
  end

  // instantiate the provided TL-UH master (unchanged)
  tilelink_uh_master_top_fixed #(
    .TL_ADDR_WIDTH   (TL_ADDR_WIDTH),
    .TL_DATA_WIDTH   (TL_DATA_WIDTH),
    .TL_STRB_WIDTH   (TL_STRB_WIDTH),
    .TL_BEAT_WIDTH   (TL_BEAT_WIDTH),
    .BEAT_LOG2       (BEAT_LOG2),
    .TL_SOURCE_WIDTH (TL_SOURCE_WIDTH),
    .TL_SINK_WIDTH   (TL_SINK_WIDTH),
    .TL_OPCODE_WIDTH (TL_OPCODE_WIDTH),
    .TL_PARAM_WIDTH  (TL_PARAM_WIDTH),
    .TL_SIZE_WIDTH   (TL_SIZE_WIDTH)
  ) master_i (
    .clk           (clk),
    .rst           (~rst_n),            // master expects active-high reset

    // tie off the testbench-style input ports (we integrate master directly)
    .a_valid_in    (1'b0),
    .a_opcode_in   ({TL_OPCODE_WIDTH{1'b0}}),
    .a_param_in    ({TL_PARAM_WIDTH{1'b0}}),
    .a_address_in  ({TL_ADDR_WIDTH{1'b0}}),
    .a_size_in     ({TL_SIZE_WIDTH{1'b0}}),
    .a_mask_in     ({TL_STRB_WIDTH{1'b0}}),
    .a_data_in     ({TL_DATA_WIDTH{1'b0}}),
    .a_source_in   ({TL_SOURCE_WIDTH{1'b0}}),
    .a_corrupt_in  (1'b0),

    // A channel master -> wrapper
    .a_ready       (master_a_ready),
    .a_valid       (master_a_valid),
    .a_opcode      (master_a_opcode),
    .a_param       (master_a_param),
    .a_size        (master_a_size),
    .a_address     (master_a_address),
    .a_mask        (master_a_mask),
    .a_data        (master_a_data),
    .a_source      (master_a_source),
    .a_corrupt     (master_a_corrupt),

    // D channel wrapper -> master
    .d_valid       (master_d_valid),
    .d_ready       (master_d_ready),
    .d_opcode      (master_d_opcode),
    .d_param       (master_d_param),
    .d_size        (master_d_size),
    .d_sink        (master_d_sink),
    .d_source      (master_d_source),
    .d_data        (master_d_data),
    .d_error       (master_d_error)
  );

endmodule