`timescale 1ns/1ps

module tb_tl_mesh_e2e (
  input logic clk,
  input logic rst_n
);

  import noc_params_pkg::*;
  import tlc_types_pkg::*;

  // Instantiate system
  tl_mesh_system dut (
    .clk(clk),
    .rst_n(rst_n)
  );

  // ============================================================
  // Cycle counter
  // ============================================================

  int cycle;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      cycle <= 0;
    else
      cycle <= cycle + 1;
  end

  // ============================================================
  // Stimulus FSM
  // ============================================================

  typedef enum logic [1:0] {
    S_IDLE,
    S_WAIT,
    S_DONE
  } state_t;

  state_t state;
  int pkt_count;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state <= S_IDLE;
      pkt_count <= 0;
    end else begin

      case (state)
      default: state <= state;

        S_IDLE: begin
          // Let master run internally.
          // Just wait a few cycles.
          if (cycle > 5)
            state <= S_WAIT;
        end

        S_WAIT: begin
          // Let traffic flow.
          // End after some cycles.
          if (cycle > 120)
            state <= S_DONE;
        end

        S_DONE: begin
          $display("Simulation completed at cycle %0d", cycle);
          $finish;
        end

        

      endcase
    end
  end

endmodule