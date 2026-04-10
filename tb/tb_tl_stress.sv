`timescale 1ns/1ps

module tb_tl_stress (
  input logic clk,
  input logic rst_n
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  // Instantiate your existing full system. This file assumes
  // the module name is `tl_mesh_system` and that it accepts
  // (clk, rst_n) as its top-level clock/reset inputs.
  //
  // If your tl_mesh_system has a different port list, adapt the instance
  // connection accordingly. In all of your earlier runs you used
  // tl_mesh_system as the DUT for the e2e test, so this reuses that module.

  // DUT instance
  tl_mesh_system dut (
    .clk  (clk),
    .rst_n(rst_n)
    // keep other ports internal to the system (system already wires clients/managers)
  );

  // Small local monitoring instrumentation:
  // cycle counter and a tiny LFSR (no stimulus directly — system generates traffic)
  logic [31:0] cycle_counter;
  logic [31:0] sample_lfsr;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      cycle_counter <= 32'd0;
      sample_lfsr   <= 32'hACE1; // seed
    end else begin
      cycle_counter <= cycle_counter + 1;

      // advance LFSR (for ad-hoc logging entropy)
      sample_lfsr <= { sample_lfsr[30:0], sample_lfsr[31] ^ sample_lfsr[21] ^ sample_lfsr[1] ^ sample_lfsr[0] };

      // occasional heartbeat printed from SV so it's visible in console
      if ((cycle_counter & 32'h3FF) == 0) begin
        $display("TB: cycle=%0d  lfsr=%08h", cycle_counter, sample_lfsr);
      end

      // termination: rely on C++ to drive $finish via controlled end
    end
  end

  // End-of-run reporter called by C++ by poking an event (we keep simple:
  // the C++ harness will cause the run to stop and you will see prints).
  // Keep this module minimal — the heavy correctness checking is embedded
  // in manager/client adapters via assertions added earlier.

endmodule