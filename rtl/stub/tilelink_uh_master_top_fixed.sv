`timescale 1ns/1ps
module tilelink_uh_master_top_fixed #(
  parameter TL_ADDR_WIDTH     = 64,
  parameter TL_DATA_WIDTH     = 64,
  parameter TL_STRB_WIDTH     = TL_DATA_WIDTH / 8,
  parameter TL_BEAT_WIDTH     = 8,
  parameter BEAT_LOG2         = $clog2(TL_BEAT_WIDTH),
  parameter TL_SOURCE_WIDTH   = 3,
  parameter TL_SINK_WIDTH     = 3,
  parameter TL_OPCODE_WIDTH   = 3,
  parameter TL_PARAM_WIDTH    = 3,
  parameter TL_SIZE_WIDTH     = 8,
  parameter MAX_BURST_LENGTH  = 16
)(
  input  wire                              clk,
  input  wire                              rst,

  input  wire                              a_valid_in,
  input  wire [TL_OPCODE_WIDTH-1:0]        a_opcode_in,
  input  wire [TL_PARAM_WIDTH-1:0]         a_param_in,
  input  wire [TL_ADDR_WIDTH-1:0]          a_address_in,
  input  wire [TL_SIZE_WIDTH-1:0]          a_size_in,
  input  wire [TL_STRB_WIDTH-1:0]          a_mask_in,
  input  wire [TL_DATA_WIDTH-1:0]          a_data_in,
  input  wire [TL_SOURCE_WIDTH-1:0]        a_source_in,
  input  wire                              a_corrupt_in,

  input  wire                              a_ready,
  output reg                               a_valid,
  output reg [TL_OPCODE_WIDTH-1:0]         a_opcode,
  output reg [TL_PARAM_WIDTH-1:0]          a_param,
  output reg [TL_ADDR_WIDTH-1:0]           a_address,
  output reg [TL_SIZE_WIDTH-1:0]           a_size,
  output reg [TL_STRB_WIDTH-1:0]           a_mask,
  output reg [TL_DATA_WIDTH-1:0]           a_data,
  output reg [TL_SOURCE_WIDTH-1:0]         a_source,
  output reg                               a_corrupt,

  input  wire                              d_valid,
  output wire                              d_ready,
  input  wire [TL_OPCODE_WIDTH-1:0]        d_opcode,
  input  wire [TL_PARAM_WIDTH-1:0]         d_param,
  input  wire [TL_SIZE_WIDTH-1:0]          d_size,
  input  wire [TL_SINK_WIDTH-1:0]          d_sink,
  input  wire [TL_SOURCE_WIDTH-1:0]        d_source,
  input  wire [TL_DATA_WIDTH-1:0]          d_data,
  input  wire                              d_error
);

  assign d_ready = 1'b1;

  reg [7:0] counter;

  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      a_valid  <= 1'b0;
      counter  <= 8'd0;
    end else begin

      a_valid <= 1'b0;

      if (counter == 8'd10) begin
        if (a_ready) begin
          a_valid   <= 1'b1;
          a_opcode  <= 3'd4; // GET
          a_param   <= 3'd0;

          a_address <= {{(TL_ADDR_WIDTH-8){1'b0}}, counter};
          a_size    <= {{(TL_SIZE_WIDTH-3){1'b0}}, 3'd3};
          a_mask    <= {TL_STRB_WIDTH{1'b1}};
          a_data    <= 64'hCAFEBABE00000000 + {{(64-8){1'b0}}, counter};
          a_source  <= 0;
          a_corrupt <= 1'b0;
        end
      end

      counter <= counter + 1;
    end
  end

endmodule