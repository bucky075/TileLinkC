`timescale 1ns/1ps
module tb_tl_multibeat_stress (
  input logic clk,
  input logic rst_n
);

  import noc_params_pkg::*;
  import tlc_types_pkg::*;

  // ============================================================
  // DUT signals
  // ============================================================

  logic                 client_a_valid;
  tl_a_t                client_a_bits;
  logic                 client_a_ready;

  logic                 client_d_valid;
  tl_d_t                client_d_bits;
  logic                 client_d_ready;

  // NoC loopback wires
  logic                  noc_out_valid;
  logic [FLIT_WIDTH-1:0] noc_out_flit;
  logic                  noc_out_ready;

  logic                  noc_in_valid;
  logic [FLIT_WIDTH-1:0] noc_in_flit;
  logic                  noc_in_ready;

  assign noc_out_ready = 1'b1;
  assign noc_in_valid  = noc_out_valid;
  assign noc_in_flit   = noc_out_flit;

  assign client_d_ready = 1'b1;

  // ============================================================
  // Instantiate client adapter
  // ============================================================

  tl_client_adapter client_i (
    .clk(clk),
    .rst_n(rst_n),

    .a_valid(client_a_valid),
    .a_bits(client_a_bits),
    .a_ready(client_a_ready),

    .b_valid(), .b_bits(), .b_ready(1'b1),
    .c_valid(1'b0), .c_bits('0), .c_ready(),
    .d_valid(client_d_valid),
    .d_bits(client_d_bits),
    .d_ready(client_d_ready),
    .e_valid(1'b0), .e_bits('0), .e_ready(),

    .noc_out_valid(noc_out_valid),
    .noc_out_flit(noc_out_flit),
    .noc_out_ready(noc_out_ready),

    .noc_in_valid(noc_in_valid),
    .noc_in_flit(noc_in_flit),
    .noc_in_ready(noc_in_ready)
  );

  // ============================================================
  // Cycle counter (no delays, purely synchronous)
  // ============================================================

  int cycle;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      cycle <= 0;
    else
      cycle <= cycle + 1;
  end

  // ============================================================
  // Packet generation FSM (NO timing constructs)
  // ============================================================

  typedef enum logic [1:0] {
    IDLE,
    SEND_BEAT1,
    SEND_BEAT2
  } state_t;

  state_t state;
  int packet_id;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state <= IDLE;
      packet_id <= 0;
      client_a_valid <= 0;
      client_a_bits <= '0;
    end else begin

      client_a_valid <= 0;

      case (state)

        IDLE: begin
          // Inject 3 packets at cycles 10, 30, 50
          if (cycle == 10 || cycle == 30 || cycle == 50) begin
            packet_id <= packet_id + 1;
            state <= SEND_BEAT1;
          end
        end

        SEND_BEAT1: begin
          client_a_valid <= 1;
          client_a_bits.a_opcode  <= A_Get;
          client_a_bits.a_param   <= 3'd0;
          client_a_bits.a_size    <= 5; // 32 bytes → 2 beats
          client_a_bits.a_source  <= 0;
          client_a_bits.a_address <= packet_id;
          client_a_bits.a_mask    <= 16'hFFFF;
          client_a_bits.a_corrupt <= 1'b0;
          client_a_bits.a_data    <= 128'hCAFEBABE00000000 + packet_id;

          state <= SEND_BEAT2;
        end

        SEND_BEAT2: begin
          client_a_valid <= 1;
          client_a_bits.a_opcode  <= A_Get;
          client_a_bits.a_param   <= 3'd0;
          client_a_bits.a_size    <= 5;
          client_a_bits.a_source  <= 0;
          client_a_bits.a_address <= packet_id;
          client_a_bits.a_mask    <= 16'hFFFF;
          client_a_bits.a_corrupt <= 1'b0;
          client_a_bits.a_data    <= 128'hDEADBEEF00000000 + packet_id;

          state <= IDLE;
        end

      endcase
    end
  end

  // ============================================================
  // Lightweight assertions
  // ============================================================

  always_ff @(posedge clk) begin
    if (rst_n) begin
      if (client_d_valid)
        $display("Cycle %0d: D received %h", cycle, client_d_bits.d_data);
    end
  end

endmodule