`timescale 1ns/1ps

module noc_mesh_xy #(
  parameter int MESH_X = 4,
  parameter int MESH_Y = 4
)(
  input  logic clk,
  input  logic rst_n,

  input  logic [MESH_X*MESH_Y-1:0]                 local_in_valid,
  input  logic [MESH_X*MESH_Y-1:0][127:0]          local_in_flit,
  output logic [MESH_X*MESH_Y-1:0]                 local_in_ready,

  output logic [MESH_X*MESH_Y-1:0]                 local_out_valid,
  output logic [MESH_X*MESH_Y-1:0][127:0]          local_out_flit,
  input  logic [MESH_X*MESH_Y-1:0]                 local_out_ready
);

  import noc_params_pkg::*;

  localparam int NUM_NODES = MESH_X * MESH_Y;
  localparam int PORTS = 5;

  // Router port arrays
  logic [NUM_NODES-1:0][PORTS-1:0]           r_in_valid;
  logic [NUM_NODES-1:0][PORTS-1:0][127:0]    r_in_flit;
  logic [NUM_NODES-1:0][PORTS-1:0]           r_in_ready;

  logic [NUM_NODES-1:0][PORTS-1:0]           r_out_valid;
  logic [NUM_NODES-1:0][PORTS-1:0][127:0]    r_out_flit;
  logic [NUM_NODES-1:0][PORTS-1:0]           r_out_ready;

  function automatic int node_id(int x, int y);
    node_id = y*MESH_X + x;
  endfunction

  genvar gx, gy;

  generate
    for (gy = 0; gy < MESH_Y; gy++) begin : ROW
      for (gx = 0; gx < MESH_X; gx++) begin : COL

        localparam int ID = gy*MESH_X + gx;

        // LOCAL port mapping
        assign r_in_valid [ID][4] = local_in_valid[ID];
        assign r_in_flit  [ID][4] = local_in_flit [ID];
        assign local_in_ready[ID] = r_in_ready   [ID][4];

        assign local_out_valid[ID] = r_out_valid [ID][4];
        assign local_out_flit [ID] = r_out_flit  [ID][4];
        assign r_out_ready    [ID][4] = local_out_ready[ID];

        // Instantiate router
        noc_router_xy_vc #(
          .X(gx),
          .Y(gy)
        ) router_i (
          .clk(clk),
          .rst_n(rst_n),
          .in_valid (r_in_valid [ID]),
          .in_flit  (r_in_flit  [ID]),
          .in_ready (r_in_ready [ID]),
          .out_valid(r_out_valid[ID]),
          .out_flit (r_out_flit [ID]),
          .out_ready(r_out_ready[ID])
        );

      end
    end
  endgenerate

  // -------------------------------------------------------
  // Directional connections using link_regs
  // -------------------------------------------------------

  generate
    for (gy = 0; gy < MESH_Y; gy++) begin : LINK_ROW
      for (gx = 0; gx < MESH_X; gx++) begin : LINK_COL

        localparam int ID = gy*MESH_X + gx;

        // NORTH (0) <-> SOUTH (1)
        if (gy > 0) begin
          localparam int NID = (gy-1)*MESH_X + gx;

          noc_link_reg link_n (
            .clk(clk),
            .rst_n(rst_n),
            .in_valid (r_out_valid[ID][0]),
            .in_flit  (r_out_flit [ID][0]),
            .in_ready (r_out_ready[ID][0]),
            .out_valid(r_in_valid [NID][1]),
            .out_flit (r_in_flit  [NID][1]),
            .out_ready(r_in_ready [NID][1])
          );
        end
        else begin
          assign r_out_ready[ID][0] = 1'b0;
        end

        // SOUTH
        if (gy < MESH_Y-1) begin
          localparam int SID = (gy+1)*MESH_X + gx;

          noc_link_reg link_s (
            .clk(clk),
            .rst_n(rst_n),
            .in_valid (r_out_valid[ID][1]),
            .in_flit  (r_out_flit [ID][1]),
            .in_ready (r_out_ready[ID][1]),
            .out_valid(r_in_valid [SID][0]),
            .out_flit (r_in_flit  [SID][0]),
            .out_ready(r_in_ready [SID][0])
          );
        end
        else begin
          assign r_out_ready[ID][1] = 1'b0;
        end

        // EAST
        if (gx < MESH_X-1) begin
          localparam int EID = gy*MESH_X + (gx+1);

          noc_link_reg link_e (
            .clk(clk),
            .rst_n(rst_n),
            .in_valid (r_out_valid[ID][2]),
            .in_flit  (r_out_flit [ID][2]),
            .in_ready (r_out_ready[ID][2]),
            .out_valid(r_in_valid [EID][3]),
            .out_flit (r_in_flit  [EID][3]),
            .out_ready(r_in_ready [EID][3])
          );
        end
        else begin
          assign r_out_ready[ID][2] = 1'b0;
        end

        // WEST
        if (gx > 0) begin
          localparam int WID = gy*MESH_X + (gx-1);

          noc_link_reg link_w (
            .clk(clk),
            .rst_n(rst_n),
            .in_valid (r_out_valid[ID][3]),
            .in_flit  (r_out_flit [ID][3]),
            .in_ready (r_out_ready[ID][3]),
            .out_valid(r_in_valid [WID][2]),
            .out_flit (r_in_flit  [WID][2]),
            .out_ready(r_in_ready [WID][2])
          );
        end
        else begin
          assign r_out_ready[ID][3] = 1'b0;
        end

      end
    end
  endgenerate

endmodule