`timescale 1ns/1ps
package noc_flit_pkg;
  import noc_params_pkg::*;

  // Note: tlc_types_pkg defines tl_* structs, but flit header only needs metadata
  typedef struct packed {
    // routing
    logic [NODE_ID_WIDTH-1:0] dst_node;
    logic [VC_ID_W-1:0]       vc;

    // TileLink transport metadata
    logic [2:0]               tl_channel;   // TL_CH_A..TL_CH_E (3 bits)
    logic [TL_SOURCE_WIDTH-1:0] tl_source;
    logic [TL_SINK_WIDTH-1:0]   tl_sink;
    logic [7:0]               tl_tag;       // generic tag field (8-bit)

    // framing
    logic                     first;
    logic                     last;

  } noc_hdr_t;

  localparam int HDR_WIDTH     = $bits(noc_hdr_t);
  localparam int PAYLOAD_WIDTH = FLIT_WIDTH - HDR_WIDTH;
  typedef logic [PAYLOAD_WIDTH-1:0] flit_payload_t;
  typedef logic [FLIT_WIDTH-1:0]    flit_t;

  function automatic noc_hdr_t extract_hdr(input flit_t flit);
    noc_hdr_t hdr;
    hdr = flit[FLIT_WIDTH-1 -: HDR_WIDTH];  // MSB-aligned
    return hdr;
  endfunction

  function automatic flit_t build_flit(input noc_hdr_t hdr,
                                       input flit_payload_t payload);
    flit_t f;
    f = {hdr, payload};   // MSB-aligned header
    return f;
  endfunction

  function automatic flit_payload_t zero_payload();
    return '0;
  endfunction

endpackage