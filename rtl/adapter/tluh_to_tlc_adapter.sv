`timescale 1ns/1ps
// rtl/adapter/tluh_to_tlc_adapter.sv
// TL-UH (team DUT) -> TL-C client adapter wrapper
// - Uses DUT port names as supplied in your header.
// - Single-beat safe: zero-extends / truncates to match TL-C types.
// - Connect the client adapter's a/d ports exactly as shown in wiring snippet.

module tluh_to_tlc_adapter #(
  // parameters mirror those in noc_params_pkg / tlc_types_pkg if you prefer
  parameter int TL_ADDR_WIDTH    = 64,
  parameter int TL_DATA_WIDTH    = 64,
  parameter int TL_SOURCE_WIDTH  = 3,
  parameter int TL_SINK_WIDTH    = 3,
  parameter int TL_OPCODE_WIDTH  = 3,
  parameter int TL_PARAM_WIDTH   = 3,
  parameter int TL_SIZE_WIDTH    = 8
)(
  input  logic clk,
  input  logic rst_n,

  // ---- DUT-facing ports (match tilelink_uh_master_top_fixed) ----
  // A channel: DUT outputs these fields (master -> slave)
  input  logic                             a_valid,
  input  logic [TL_OPCODE_WIDTH-1:0]       a_opcode,
  input  logic [TL_PARAM_WIDTH-1:0]        a_param,
  input  logic [TL_ADDR_WIDTH-1:0]         a_address,
  input  logic [TL_SIZE_WIDTH-1:0]         a_size,
  input  logic [(TL_DATA_WIDTH/8)-1:0]     a_mask,   // TL_STRB_WIDTH
  input  logic [TL_DATA_WIDTH-1:0]         a_data,
  input  logic [TL_SOURCE_WIDTH-1:0]       a_source,
  input  logic                             a_corrupt,
  output logic                            a_ready,  // DUT input

  // D channel: DUT receives these (slave -> master)
  output logic                            d_valid,
  output logic [TL_OPCODE_WIDTH-1:0]      d_opcode,
  output logic [TL_PARAM_WIDTH-1:0]       d_param,
  output logic [TL_SIZE_WIDTH-1:0]        d_size,
  output logic [TL_SINK_WIDTH-1:0]        d_sink,
  output logic [TL_SOURCE_WIDTH-1:0]      d_source,
  output logic [TL_DATA_WIDTH-1:0]        d_data,
  output logic                            d_error,
  input  logic                            d_ready,   // DUT output

  // ---- Client-adapter-facing ports (TL-C typed) ----
  // Connect these to your existing tl_client_adapter instance
  output logic                         client_a_valid,
  output tlc_types_pkg::tl_a_t        client_a_bits,
  input  logic                         client_a_ready,

  input  logic                         client_d_valid,
  input  tlc_types_pkg::tl_d_t        client_d_bits,
  output logic                         client_d_ready
);

  import tlc_types_pkg::*;
  import noc_params_pkg::*;

  // ---- A => build client a_bits from DUT signals ----
  always_comb begin
    client_a_bits = '0;

    // opcode: direct mapping (sizes/names already match TL opcodes in your tlc_types_pkg)
    client_a_bits.a_opcode = a_opcode;

    // param
    client_a_bits.a_param  = a_param;

    // size (possibly different widths — truncate/zero-extend)
    if ($bits(client_a_bits.a_size) >= $bits(a_size))
      client_a_bits.a_size = a_size;
    else
      client_a_bits.a_size = a_size[$bits(client_a_bits.a_size)-1:0];

    // source
    if ($bits(client_a_bits.a_source) >= $bits(a_source))
      client_a_bits.a_source = a_source;
    else
      client_a_bits.a_source = a_source[$bits(client_a_bits.a_source)-1:0];

    // address (truncate/extend conservatively)
    if ($bits(client_a_bits.a_address) >= $bits(a_address))
      client_a_bits.a_address = a_address;
    else
      client_a_bits.a_address = a_address[$bits(client_a_bits.a_address)-1:0];

    // mask -> width might differ; clamp or extend
    if ($bits(client_a_bits.a_mask) >= $bits(a_mask))
      client_a_bits.a_mask = a_mask;
    else
      client_a_bits.a_mask = a_mask[$bits(client_a_bits.a_mask)-1:0];

    // data
    if ($bits(client_a_bits.a_data) >= $bits(a_data))
      client_a_bits.a_data = a_data;
    else
      client_a_bits.a_data = a_data[$bits(client_a_bits.a_data)-1:0];

    // corrupt
    client_a_bits.a_corrupt = a_corrupt;
  end

  // handshake passthrough: client ready controls DUT ready
  assign client_a_valid = a_valid;
  assign a_ready        = client_a_ready;

  // ---- D channel: map client_d_bits -> DUT outputs ----
  // client_d_valid arrives from tl_client_adapter (manager side)
  always_comb begin
    // default outputs
    d_valid  = 1'b0;
    d_opcode = '0;
    d_param  = '0;
    d_size   = '0;
    d_sink   = '0;
    d_source = '0;
    d_data   = '0;
    d_error  = 1'b0;

    if (client_d_valid) begin
      d_valid  = 1'b1;
      // opcode / param
      d_opcode = client_d_bits.d_opcode;
      d_param  = client_d_bits.d_param;

      // size
      if ($bits(client_d_bits.d_size) >= $bits(d_size))
        d_size = client_d_bits.d_size;
      else
        d_size = client_d_bits.d_size[$bits(d_size)-1:0];

      // source (TileLink D uses source in many encodings)
      if ($bits(client_d_bits.d_source) >= $bits(d_source))
        d_source = client_d_bits.d_source;
      else
        d_source = client_d_bits.d_source[$bits(d_source)-1:0];

      // sink -> copy lower bits (tool DUT expects sink id on d_sink)
      if ($bits(client_d_bits.d_sink) >= $bits(d_sink))
        d_sink = client_d_bits.d_sink;
      else
        d_sink = client_d_bits.d_sink[$bits(d_sink)-1:0];

      // data
      if ($bits(client_d_bits.d_data) >= $bits(d_data))
        d_data = client_d_bits.d_data[$bits(d_data)-1:0];
      else
        d_data = client_d_bits.d_data[$bits(d_data)-1:0];

      // denied / corrupt -> map into d_error conservatively
      d_error = client_d_bits.d_denied | client_d_bits.d_corrupt;
    end
  end

  // drive client_d_ready from DUT's d_ready
  assign client_d_ready = d_ready;

endmodule