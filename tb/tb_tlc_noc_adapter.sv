`timescale 1ns/1ps

module tb_tlc_noc_adapter (
  input  logic clk,
  input  logic rst_n
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  // ------------------------------------------------------------
  // Client-side TileLink signals
  // ------------------------------------------------------------

  logic  a_valid;
  tl_a_t a_bits;
  logic  a_ready;

  logic  d_valid;
  tl_d_t d_bits;
  logic  d_ready;

  // Unused channels (kept for completeness)
  logic  b_valid;
  tl_b_t b_bits;
  logic  b_ready;

  logic  c_valid;
  tl_c_t c_bits;
  logic  c_ready;

  logic  e_valid;
  tl_e_t e_bits;
  logic  e_ready;

  // ------------------------------------------------------------
  // NoC wires between client and manager adapters
  // ------------------------------------------------------------

  logic                   noc_req_valid;
  logic [FLIT_WIDTH-1:0]  noc_req_flit;
  logic                   noc_req_ready;

  logic                   noc_resp_valid;
  logic [FLIT_WIDTH-1:0]  noc_resp_flit;
  logic                   noc_resp_ready;

  // ------------------------------------------------------------
  // Instantiate CLIENT adapter
  // ------------------------------------------------------------

  tl_client_adapter client_i (
    .clk(clk),
    .rst_n(rst_n),

    .a_valid(a_valid),
    .a_bits(a_bits),
    .a_ready(a_ready),

    .b_valid(b_valid),
    .b_bits(b_bits),
    .b_ready(1'b1),

    .c_valid(1'b0),
    .c_bits('0),
    .c_ready(),

    .d_valid(d_valid),
    .d_bits(d_bits),
    .d_ready(d_ready),

    .e_valid(1'b0),
    .e_bits('0),
    .e_ready(),

    .noc_req_valid(noc_req_valid),
    .noc_req_flit(noc_req_flit),
    .noc_req_ready(noc_req_ready),

    .noc_resp_valid(noc_resp_valid),
    .noc_resp_flit(noc_resp_flit),
    .noc_resp_ready(noc_resp_ready)
  );

  // ------------------------------------------------------------
  // Instantiate MANAGER adapter
  // ------------------------------------------------------------

  tl_manager_adapter manager_i (
    .clk(clk),
    .rst_n(rst_n),

    .noc_in_valid(noc_req_valid),
    .noc_in_flit(noc_req_flit),
    .noc_in_ready(noc_req_ready),

    .noc_out_valid(noc_resp_valid),
    .noc_out_flit(noc_resp_flit),
    .noc_out_ready(noc_resp_ready)
  );

  assign d_ready = 1'b1;

  // ------------------------------------------------------------
  // Test stimulus FSM
  // ------------------------------------------------------------

  typedef enum logic [2:0] {
    S_IDLE,
    S_GET1,
    S_WAIT_GET1,
    S_PUT,
    S_WAIT_PUT,
    S_GET2,
    S_WAIT_GET2,
    S_DONE
  } state_t;

  state_t state;

  logic [63:0] addr;
  logic [63:0] write_data;

  // ------------------------------------------------------------
  // Reset + initial values
  // ------------------------------------------------------------

  initial begin
    a_valid = 0;
    a_bits  = '0;
    state   = S_IDLE;

    addr       = 64'h40;
    write_data = 64'hDEADBEEFCAFEBABE;
  end

  // ------------------------------------------------------------
  // Main test FSM
  // ------------------------------------------------------------

  always_ff @(posedge clk) begin

    if (!rst_n) begin
      state   <= S_GET1;
      a_valid <= 0;
    end

    else begin

      case (state)

        //--------------------------------------------------------
        // First GET
        //--------------------------------------------------------
        S_GET1: begin

          a_bits <= '0;
          a_bits.a_opcode  <= A_Get;
          a_bits.a_address <= addr;
          a_bits.a_size    <= 3;
          a_bits.a_source  <= 0;

          a_valid <= 1;

          if (a_ready) begin
            a_valid <= 0;
            state   <= S_WAIT_GET1;
          end
        end

        S_WAIT_GET1: begin
          if (d_valid) begin
            $display("GET1 response = %h", d_bits.d_data);
            state <= S_PUT;
          end
        end

        //--------------------------------------------------------
        // PUT
        //--------------------------------------------------------
        S_PUT: begin

          a_bits <= '0;
          a_bits.a_opcode  <= A_PutFullData;
          a_bits.a_address <= addr;
          a_bits.a_size    <= 3;
          a_bits.a_source  <= 0;
          a_bits.a_mask    <= 8'hFF;
          a_bits.a_data    <= write_data;

          a_valid <= 1;

          if (a_ready) begin
            a_valid <= 0;
            state   <= S_WAIT_PUT;
          end
        end

        S_WAIT_PUT: begin
          if (d_valid) begin
            $display("PUT acknowledged");
            state <= S_GET2;
          end
        end

        //--------------------------------------------------------
        // Second GET
        //--------------------------------------------------------
        S_GET2: begin

          a_bits <= '0;
          a_bits.a_opcode  <= A_Get;
          a_bits.a_address <= addr;
          a_bits.a_size    <= 3;
          a_bits.a_source  <= 0;

          a_valid <= 1;

          if (a_ready) begin
            a_valid <= 0;
            state   <= S_WAIT_GET2;
          end
        end

        S_WAIT_GET2: begin
          if (d_valid) begin
            $display("GET2 response = %h", d_bits.d_data);

            if (d_bits.d_data == write_data)
              $display("PASS: Memory write/read verified");
            else
              $display("FAIL: Data mismatch");

            state <= S_DONE;
          end
        end

        //--------------------------------------------------------
        S_DONE: begin
          $finish;
        end

      endcase

    end

  end

endmodule