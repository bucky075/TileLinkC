`timescale 1ns/1ps
package tlc_types_pkg;

  import noc_params_pkg::*;

  // ============================================================
  // A Channel Opcodes
  // ============================================================

  localparam logic [2:0] A_PutFullData    = 3'd0;
  localparam logic [2:0] A_PutPartialData = 3'd1;
  localparam logic [2:0] A_ArithmeticData = 3'd2;
  localparam logic [2:0] A_LogicalData    = 3'd3;
  localparam logic [2:0] A_Get            = 3'd4;
  localparam logic [2:0] A_Hint           = 3'd5;
  localparam logic [2:0] A_AcquireBlock   = 3'd6;
  localparam logic [2:0] A_AcquirePerm    = 3'd7;

  // ============================================================
  // B Channel Opcodes
  // ============================================================

  localparam logic [2:0] B_PutFullData    = 3'd0;
  localparam logic [2:0] B_PutPartialData = 3'd1;
  localparam logic [2:0] B_ArithmeticData = 3'd2;
  localparam logic [2:0] B_LogicalData    = 3'd3;
  localparam logic [2:0] B_Get            = 3'd4;
  localparam logic [2:0] B_Hint           = 3'd5;
  localparam logic [2:0] B_ProbeBlock     = 3'd6;
  localparam logic [2:0] B_ProbePerm      = 3'd7;

  // ============================================================
  // C Channel Opcodes
  // ============================================================

  localparam logic [2:0] C_AccessAck      = 3'd0;
  localparam logic [2:0] C_AccessAckData  = 3'd1;
  localparam logic [2:0] C_HintAck        = 3'd2;
  localparam logic [2:0] C_ProbeAck       = 3'd4;
  localparam logic [2:0] C_ProbeAckData   = 3'd5;
  localparam logic [2:0] C_Release        = 3'd6;
  localparam logic [2:0] C_ReleaseData    = 3'd7;

  // ============================================================
  // D Channel Opcodes
  // ============================================================

  localparam logic [2:0] D_AccessAck      = 3'd0;
  localparam logic [2:0] D_AccessAckData  = 3'd1;
  localparam logic [2:0] D_HintAck        = 3'd2;
  localparam logic [2:0] D_Grant          = 3'd4;
  localparam logic [2:0] D_GrantData      = 3'd5;
  localparam logic [2:0] D_ReleaseAck     = 3'd6;

  // ============================================================
  // A Channel Struct
  // ============================================================

  typedef struct packed {
    logic [2:0]                        a_opcode;
    logic [2:0]                        a_param;
    logic [TL_SIZE_WIDTH-1:0]          a_size;
    logic [TL_SOURCE_WIDTH-1:0]        a_source;
    logic [TL_ADDR_WIDTH-1:0]          a_address;
    logic [TL_STRB_WIDTH-1:0]          a_mask;
    logic                              a_corrupt;
    logic [TL_DATA_WIDTH-1:0]          a_data;
  } tl_a_t;

  // ============================================================
  // B Channel Struct
  // ============================================================

  typedef struct packed {
    logic [2:0]                        b_opcode;
    logic [2:0]                        b_param;
    logic [TL_SIZE_WIDTH-1:0]          b_size;
    logic [TL_SOURCE_WIDTH-1:0]        b_source;
    logic [TL_ADDR_WIDTH-1:0]          b_address;
    logic [TL_STRB_WIDTH-1:0]          b_mask;
    logic                              b_corrupt;
    logic [TL_DATA_WIDTH-1:0]          b_data;
  } tl_b_t;

  // ============================================================
  // C Channel Struct
  // ============================================================

  typedef struct packed {
    logic [2:0]                        c_opcode;
    logic [2:0]                        c_param;
    logic [TL_SIZE_WIDTH-1:0]          c_size;
    logic [TL_SOURCE_WIDTH-1:0]        c_source;
    logic [TL_DATA_WIDTH-1:0]          c_data;
    logic                              c_corrupt;
  } tl_c_t;

  // ============================================================
  // D Channel Struct
  // ============================================================

  typedef struct packed {
    logic [2:0]                        d_opcode;
    logic [2:0]                        d_param;
    logic [TL_SIZE_WIDTH-1:0]          d_size;
    logic [TL_SOURCE_WIDTH-1:0]        d_source;
    logic [TL_SINK_WIDTH-1:0]          d_sink;
    logic                              d_denied;
    logic                              d_corrupt;
    logic [TL_DATA_WIDTH-1:0]          d_data;
  } tl_d_t;

  // ============================================================
  // E Channel Struct
  // ============================================================

  typedef struct packed {
    logic [TL_SINK_WIDTH-1:0]          e_sink;
  } tl_e_t;

endpackage