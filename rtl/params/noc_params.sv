`timescale 1ns/1ps
package noc_params_pkg;

  // ============================================================
  // Mesh Parameters
  // ============================================================

  localparam int MESH_X = 4;
  localparam int MESH_Y = 4;
  localparam int NUM_NODES = MESH_X * MESH_Y;
  localparam int NODE_ID_WIDTH =
      (NUM_NODES > 1) ? $clog2(NUM_NODES) : 1;

  // ============================================================
  // Flit Parameters
  // ============================================================

  // Must be large enough to carry TL header + TL payload
  localparam int FLIT_WIDTH = 256;

  // ============================================================
  // Virtual Channels
  // ============================================================

  localparam int NUM_VCS = 8;
  localparam int VC_ID_W =
      (NUM_VCS > 1) ? $clog2(NUM_VCS) : 1;

  localparam int VC_ESCAPE = 0;
  localparam int VC_CTRL   = 1;
  localparam int VC_SYS    = 2;
  localparam int VC_REQ_H  = 3;
  localparam int VC_REQ_L  = 4;
  localparam int VC_RESP   = 5;
  localparam int VC_IO_H   = 6;
  localparam int VC_IO_L   = 7;

  // Per-VC depths and weights
  localparam int VC_DEPTHS [NUM_VCS] =
      '{4,4,4,16,8,8,12,8};

  localparam int VC_WEIGHTS [NUM_VCS] =
      '{1,4,3,6,2,4,5,2};

  // ============================================================
  // TileLink Core Parameters
  // ============================================================

  localparam int TL_ADDR_WIDTH   = 64;
  localparam int TL_DATA_WIDTH   = 64;
  localparam int TL_STRB_WIDTH   = TL_DATA_WIDTH / 8;
  localparam int TL_BEAT_BYTES   = 8;
  localparam int TL_BEAT_LOG2    = $clog2(TL_BEAT_BYTES);

  localparam int TL_SOURCE_WIDTH = 3;
  localparam int TL_SINK_WIDTH   = 3;
  localparam int TL_OPCODE_WIDTH = 3;
  localparam int TL_PARAM_WIDTH  = 3;
  localparam int TL_SIZE_WIDTH   = 8;

  localparam int TL_MAX_BEATS    = 16;

  // ============================================================
  // TL Channel Identifiers
  // ============================================================

  localparam logic [2:0] TL_CH_A = 3'd0;
  localparam logic [2:0] TL_CH_B = 3'd1;
  localparam logic [2:0] TL_CH_C = 3'd2;
  localparam logic [2:0] TL_CH_D = 3'd3;
  localparam logic [2:0] TL_CH_E = 3'd4;

  // ============================================================
  // NoC Transaction ID
  // ============================================================

  localparam int TXN_ID_WIDTH = 32;

  // ============================================================
  // Optional Routing Parameters
  // ============================================================

  localparam int AGE_THRESHOLD = 512;
  localparam int AGE_BOOST     = 8;

  // ============================================================
  // TL Channel → VC Mapping Function
  // ============================================================

function automatic logic [VC_ID_W-1:0] tl_channel_to_vc(
  input logic [2:0] ch
);

  logic [VC_ID_W-1:0] vc_out;

  case (ch)
    TL_CH_A: vc_out = VC_REQ_H[VC_ID_W-1:0];
    TL_CH_B: vc_out = VC_CTRL[VC_ID_W-1:0];
    TL_CH_C: vc_out = VC_SYS[VC_ID_W-1:0];
    TL_CH_D: vc_out = VC_RESP[VC_ID_W-1:0];
    TL_CH_E: vc_out = VC_CTRL[VC_ID_W-1:0];
    default: vc_out = VC_ESCAPE[VC_ID_W-1:0];
  endcase

  return vc_out;

endfunction

endpackage