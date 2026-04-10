`timescale 1ns/1ps

module tb_tl_end_to_end (
  input logic clk,
  input logic rst_n
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  // ----------------------------
  // Wires between client <-> router <-> manager
  // ----------------------------

  logic c_noc_out_valid;
  logic [FLIT_WIDTH-1:0] c_noc_out_flit;
  logic c_noc_out_ready;

  logic m_noc_in_valid;
  logic [FLIT_WIDTH-1:0] m_noc_in_flit;
  logic m_noc_in_ready;

  logic m_noc_out_valid;
  logic [FLIT_WIDTH-1:0] m_noc_out_flit;
  logic m_noc_out_ready;

  logic c_noc_in_valid;
  logic [FLIT_WIDTH-1:0] c_noc_in_flit;
  logic c_noc_in_ready;

  // Simple direct wiring (1-hop)
  assign m_noc_in_valid  = c_noc_out_valid;
  assign m_noc_in_flit   = c_noc_out_flit;
  assign c_noc_out_ready = m_noc_in_ready;

  assign c_noc_in_valid  = m_noc_out_valid;
  assign c_noc_in_flit   = m_noc_out_flit;
  assign m_noc_out_ready = c_noc_in_ready;

  // ----------------------------
  // TL Client Side
  // ----------------------------

  logic                 a_valid;
  tl_a_t                a_bits;
  logic                 a_ready;

  logic                 d_valid;
  tl_d_t                d_bits;
  logic                 d_ready;

  tl_client_adapter client (
    .clk(clk),
    .rst_n(rst_n),

    .a_valid(a_valid),
    .a_bits(a_bits),
    .a_ready(a_ready),

    .d_valid(d_valid),
    .d_bits(d_bits),
    .d_ready(d_ready),

    .noc_out_valid(c_noc_out_valid),
    .noc_out_flit(c_noc_out_flit),
    .noc_out_ready(c_noc_out_ready),

    .noc_in_valid(c_noc_in_valid),
    .noc_in_flit(c_noc_in_flit),
    .noc_in_ready(c_noc_in_ready)
  );

  // ----------------------------
  // TL Manager Adapter
  // ----------------------------

  logic                 m_a_valid;
  tl_a_t                m_a_bits;
  logic                 m_a_ready;

  logic                 m_d_valid;
  tl_d_t                m_d_bits;
  logic                 m_d_ready;

  tl_manager_adapter manager (
    .clk(clk),
    .rst_n(rst_n),

    .noc_in_valid(m_noc_in_valid),
    .noc_in_flit(m_noc_in_flit),
    .noc_in_ready(m_noc_in_ready),

    .noc_out_valid(m_noc_out_valid),
    .noc_out_flit(m_noc_out_flit),
    .noc_out_ready(m_noc_out_ready),

    .a_valid(m_a_valid),
    .a_bits(m_a_bits),
    .a_ready(m_a_ready),

    .d_valid(m_d_valid),
    .d_bits(m_d_bits),
    .d_ready(m_d_ready)
  );

  // ----------------------------
  // Echo Manager Behavior
  // ----------------------------

  assign m_a_ready = 1;
  assign m_d_ready = 1;
  assign d_ready   = 1;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      m_d_valid <= 0;
      m_d_bits  <= '0;
    end else begin
      m_d_valid <= 0;

      if (m_a_valid) begin
        m_d_valid           <= 1;
        m_d_bits.d_opcode   <= 3'd0;
        m_d_bits.d_param    <= 0;
        m_d_bits.d_size     <= m_a_bits.a_size;
        m_d_bits.d_source   <= m_a_bits.a_source;
        m_d_bits.d_sink     <= m_a_bits.a_source;
        m_d_bits.d_denied   <= 0;
        m_d_bits.d_corrupt  <= 0;
        m_d_bits.d_data     <= m_a_bits.a_data;
      end
    end
  end

  // ----------------------------
  // Stimulus
  // ----------------------------

  int cycle;

  initial cycle = 0;

  always @(posedge clk) begin
    if (!rst_n) begin
      cycle   <= 0;
      a_valid <= 0;
    end else begin
      cycle <= cycle + 1;

      if (cycle == 5) begin
        a_valid            <= 1;
        a_bits.a_opcode    <= 3'd0;
        a_bits.a_param     <= 0;
        a_bits.a_size      <= 4'd4; // 16B
        a_bits.a_source    <= 8'hAA;
        a_bits.a_address   <= 48'h1;
        a_bits.a_mask      <= 16'hFFFF;
        a_bits.a_corrupt   <= 0;
        a_bits.a_data      <= 128'hDEADBEEFCAFEBABE0011223344556677;
      end else begin
        a_valid <= 0;
      end

      if (d_valid) begin
        $display("Received D response: %h", d_bits.d_data);
        $finish;
      end
    end
  end

endmodule