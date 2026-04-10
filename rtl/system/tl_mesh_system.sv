`timescale 1ns/1ps
module tl_mesh_system #(
  parameter int MESH_X = 4,
  parameter int MESH_Y = 4
)(
  input logic clk,
  input logic rst_n
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  localparam int NUM_NODES = MESH_X * MESH_Y;
  localparam int PORTS     = 5; // N,S,E,W,LOCAL

  // ============================================================
  // Router Interface Arrays
  // ============================================================

  logic [NUM_NODES-1:0][PORTS-1:0]                 r_in_valid;
  logic [NUM_NODES-1:0][PORTS-1:0][FLIT_WIDTH-1:0] r_in_flit;
  logic [NUM_NODES-1:0][PORTS-1:0]                 r_in_ready;

  logic [NUM_NODES-1:0][PORTS-1:0]                 r_out_valid;
  logic [NUM_NODES-1:0][PORTS-1:0][FLIT_WIDTH-1:0] r_out_flit;
  logic [NUM_NODES-1:0][PORTS-1:0]                 r_out_ready;

  // ============================================================
  // Client Wiring
  // ============================================================

  logic [NUM_NODES-1:0]                 client_req_valid;
  logic [NUM_NODES-1:0][FLIT_WIDTH-1:0] client_req_flit;
  logic [NUM_NODES-1:0]                 client_req_ready;

  logic [NUM_NODES-1:0]                 client_resp_valid;
  logic [NUM_NODES-1:0][FLIT_WIDTH-1:0] client_resp_flit;
  logic [NUM_NODES-1:0]                 client_resp_ready;

  // ============================================================
  // Manager Wiring
  // ============================================================

  logic [NUM_NODES-1:0]                 mgr_req_valid;
  logic [NUM_NODES-1:0][FLIT_WIDTH-1:0] mgr_req_flit;
  logic [NUM_NODES-1:0]                 mgr_req_ready;

  logic [NUM_NODES-1:0]                 mgr_resp_valid;
  logic [NUM_NODES-1:0][FLIT_WIDTH-1:0] mgr_resp_flit;
  logic [NUM_NODES-1:0]                 mgr_resp_ready;

  logic [31:0]                          mgr_used_count [NUM_NODES];

  // ============================================================
  // TL Client Interface Arrays
  // ============================================================

  tl_a_t  a_client_bits   [NUM_NODES];
  logic   a_client_valid  [NUM_NODES];
  logic   a_client_ready  [NUM_NODES];

  tl_d_t  d_client_bits   [NUM_NODES];
  logic   d_client_valid  [NUM_NODES];
  logic   d_client_ready  [NUM_NODES];

  // ============================================================
  // Routers
  // ============================================================

  genvar n;

  generate
    for (n = 0; n < NUM_NODES; n++) begin : GEN_ROUTER

      noc_router_xy_vc router_i (
        .clk(clk),
        .rst_n(rst_n),
        .in_valid (r_in_valid[n]),
        .in_flit  (r_in_flit[n]),
        .in_ready (r_in_ready[n]),
        .out_valid(r_out_valid[n]),
        .out_flit (r_out_flit[n]),
        .out_ready(r_out_ready[n])
      );

    end
  endgenerate

  // ============================================================
  // Disable cardinal ports
  // ============================================================

  generate
    for (n = 0; n < NUM_NODES; n++) begin

      assign r_in_valid[n][0] = 1'b0;
      assign r_in_flit [n][0] = '0;
      assign r_in_valid[n][1] = 1'b0;
      assign r_in_flit [n][1] = '0;
      assign r_in_valid[n][2] = 1'b0;
      assign r_in_flit [n][2] = '0;
      assign r_in_valid[n][3] = 1'b0;
      assign r_in_flit [n][3] = '0;

      assign r_out_ready[n][0] = 1'b0;
      assign r_out_ready[n][1] = 1'b0;
      assign r_out_ready[n][2] = 1'b0;
      assign r_out_ready[n][3] = 1'b0;

    end
  endgenerate

  // ============================================================
  // LOCAL PORT (Clean Single-Driver Wiring)
  // ============================================================

  generate
    for (n = 0; n < NUM_NODES; n++) begin : GEN_LOCAL

      // -------------------------
      // Into Router LOCAL (manager priority)
      // -------------------------

      logic local_req_valid;
      logic [FLIT_WIDTH-1:0] local_req_flit;

      assign local_req_valid =
          mgr_req_valid[n] ? 1'b1 :
          client_req_valid[n];

      assign local_req_flit =
          mgr_req_valid[n] ? mgr_req_flit[n] :
                             client_req_flit[n];

      assign r_in_valid[n][4] = local_req_valid;
      assign r_in_flit [n][4] = local_req_flit;

      assign mgr_req_ready[n] =
          mgr_req_valid[n] & r_in_ready[n][4];

      assign client_req_ready[n] =
          (!mgr_req_valid[n]) & r_in_ready[n][4];

      // -------------------------
      // From Router LOCAL
      // -------------------------

      logic local_resp_valid;
      logic [FLIT_WIDTH-1:0] local_resp_flit;

      assign local_resp_valid = r_out_valid[n][4];
      assign local_resp_flit  = r_out_flit[n][4];

      assign mgr_resp_valid[n]  = local_resp_valid;
      assign mgr_resp_flit[n]   = local_resp_flit;

      assign client_resp_valid[n] = local_resp_valid;
      assign client_resp_flit[n]  = local_resp_flit;

      // single driver for ready
      assign r_out_ready[n][4] = client_resp_ready[n];
      assign mgr_resp_ready[n] = client_resp_ready[n];

    end
  endgenerate

  // ============================================================
  // Per-Node Logic
  // ============================================================

  generate
    for (n = 0; n < NUM_NODES; n++) begin : GEN_NODE

      tluh_master_node master_i (
        .clk(clk),
        .rst_n(rst_n),
        .a_valid_out(a_client_valid[n]),
        .a_bits_out (a_client_bits[n]),
        .a_ready_in (a_client_ready[n]),
        .d_valid_in (d_client_valid[n]),
        .d_bits_in  (d_client_bits[n]),
        .d_ready_out(d_client_ready[n])
      );

      tl_client_adapter client_i (
        .clk(clk),
        .rst_n(rst_n),

        .a_valid(a_client_valid[n]),
        .a_bits (a_client_bits[n]),
        .a_ready(a_client_ready[n]),

        .b_valid(),
        .b_bits(),
        .b_ready(1'b1),

        .c_valid(1'b0),
        .c_bits('0),
        .c_ready(),

        .d_valid(d_client_valid[n]),
        .d_bits (d_client_bits[n]),
        .d_ready(d_client_ready[n]),

        .e_valid(1'b0),
        .e_bits('0),
        .e_ready(),

        .noc_req_valid(client_req_valid[n]),
        .noc_req_flit (client_req_flit[n]),
        .noc_req_ready(client_req_ready[n]),

        .noc_resp_valid(client_resp_valid[n]),
        .noc_resp_flit (client_resp_flit[n]),
        .noc_resp_ready(client_resp_ready[n])
      );

      tl_manager_adapter manager_i (
        .clk(clk),
        .rst_n(rst_n),

        .noc_in_valid(mgr_resp_valid[n]),
        .noc_in_flit (mgr_resp_flit[n]),
        .noc_in_ready(mgr_resp_ready[n]),

        .noc_out_valid(mgr_req_valid[n]),
        .noc_out_flit (mgr_req_flit[n]),
        .noc_out_ready(mgr_req_ready[n]),

        .perf_reqs(),
        .perf_beats(),
        .perf_stalls(),
        .used_count_out(mgr_used_count[n])
      );

      tl_monitor monitor_i (
        .clk(clk),
        .rst_n(rst_n),
        .a_fire(a_client_valid[n] & a_client_ready[n]),
        .a_source(a_client_bits[n].a_source),
        .d_fire(d_client_valid[n] & d_client_ready[n]),
        .d_source(d_client_bits[n].d_source),
        .outstanding_count(mgr_used_count[n])
      );

    end
  endgenerate

endmodule