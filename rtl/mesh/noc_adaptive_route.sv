`timescale 1ns/1ps
module noc_adaptive_route #(
  parameter int MESH_X = 4,
  parameter int MESH_Y = 4
)(
  input  logic [$clog2(MESH_X)-1:0] cur_x,
  input  logic [$clog2(MESH_Y)-1:0] cur_y,

  input  logic [$clog2(MESH_X*MESH_Y)-1:0] dst_node,

  // free slots for candidate output ports
  // index: 0=NORTH, 1=SOUTH, 2=EAST, 3=WEST
  input  logic [15:0] free_slots [4],

  input  logic        use_escape,   // if asserted, force deterministic XY
  output logic [2:0]  out_port,     // 0=NORTH,1=SOUTH,2=EAST,3=WEST,4=LOCAL
  output logic        force_escape  // suggest fallback to escape VC
);

  localparam int NODE_W = $clog2(MESH_X*MESH_Y);

  logic [$clog2(MESH_X)-1:0] dst_x;
  logic [$clog2(MESH_Y)-1:0] dst_y;

  always_comb begin
    dst_x = dst_node % MESH_X;
    dst_y = dst_node / MESH_X;
  end

  always_comb begin
    out_port     = 3'd4; // default LOCAL
    force_escape = 1'b0;

    if (dst_x == cur_x && dst_y == cur_y) begin
      out_port = 3'd4;
    end else begin
      logic need_x;
      logic need_y;

      need_x = (dst_x != cur_x);
      need_y = (dst_y != cur_y);

      if (use_escape) begin
        // deterministic XY routing
        if (need_x) begin
          if (dst_x > cur_x)
            out_port = 3'd2; // EAST
          else
            out_port = 3'd3; // WEST
        end else begin
          if (dst_y > cur_y)
            out_port = 3'd1; // SOUTH
          else
            out_port = 3'd0; // NORTH
        end
      end else begin
        // adaptive case
        if (need_x && need_y) begin
          logic [15:0] fx;
          logic [15:0] fy;
          logic [2:0]  px;
          logic [2:0]  py;

          if (dst_x > cur_x) begin
            px = 3'd2; // EAST
            fx = free_slots[2];
          end else begin
            px = 3'd3; // WEST
            fx = free_slots[3];
          end

          if (dst_y > cur_y) begin
            py = 3'd1; // SOUTH
            fy = free_slots[1];
          end else begin
            py = 3'd0; // NORTH
            fy = free_slots[0];
          end

          if (fx > fy) begin
            out_port = px;
          end else if (fy > fx) begin
            out_port = py;
          end else begin
            // equal congestion
            if (fx == 0 && fy == 0) begin
              out_port = px;      // deterministic tie
              force_escape = 1'b1;
            end else begin
              out_port = px;      // deterministic tie
            end
          end

        end else if (need_x) begin
          if (dst_x > cur_x)
            out_port = 3'd2;
          else
            out_port = 3'd3;
        end else begin
          if (dst_y > cur_y)
            out_port = 3'd1;
          else
            out_port = 3'd0;
        end
      end
    end
  end

endmodule