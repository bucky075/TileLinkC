`timescale 1ns/1ps
// rtl/mesh/noc_router_xy_vc.sv
// Cleaned XY router: no inferred latches, no implicit-static initializers,
// FIFO count/free_slots connected to per-instance unused wires,
// arbiter remains VC-indexed (NREQ = VCS).

module noc_router_xy_vc #(
  parameter int X = 0,
  parameter int Y = 0,
  parameter int VC_QOS [NUM_VCS] = '{default:1}
)(
  input  logic                     clk,
  input  logic                     rst_n,

  // 5 physical ports: 0=N,1=S,2=E,3=W,4=LOCAL
  input  logic [4:0]               in_valid,
  input  logic [4:0][FLIT_WIDTH-1:0] in_flit,
  output logic [4:0]               in_ready,

  output logic [4:0]               out_valid,
  output logic [4:0][FLIT_WIDTH-1:0] out_flit,
  input  logic [4:0]               out_ready
);

  import noc_params_pkg::*;
  import noc_flit_pkg::*;
  import tlc_types_pkg::*;

  localparam int PORTS = 5;
  localparam int VCS   = NUM_VCS;
  localparam int FLIT_W = FLIT_WIDTH;
  localparam int NREQ  = VCS; // arbiter is VC-indexed as required

  localparam int NUM_NODES = MESH_X * MESH_Y;
  localparam int NODE_ID_W = (NUM_NODES > 1) ? $clog2(NUM_NODES) : 1;
  localparam int VC_ID_W   = (VCS > 1) ? $clog2(VCS) : 1;

  // --- Input-stage registers ---
  logic [PORTS-1:0]                    in_reg_valid;
  logic [PORTS-1:0][FLIT_W-1:0]        in_reg_flit;

  // --- VC FIFOs (per-port, per-VC) ---
  logic [PORTS-1:0][VCS-1:0]                 fifo_push;
  logic [PORTS-1:0][VCS-1:0][FLIT_W-1:0]     fifo_din;
  logic [PORTS-1:0][VCS-1:0]                 fifo_pop;
  logic [PORTS-1:0][VCS-1:0][FLIT_W-1:0]     fifo_dout;
  logic [PORTS-1:0][VCS-1:0]                 fifo_empty;
  logic [PORTS-1:0][VCS-1:0]                 fifo_full;

  genvar gp, gv;
  generate
    for (gp = 0; gp < PORTS; gp++) begin : GEN_PORTS
      for (gv = 0; gv < VCS; gv++) begin : GEN_VCS
        // per-instance width for count/free_slots to satisfy FIFO port widths
        localparam int CNT_W = (VC_DEPTHS[gv] > 1) ? $clog2(VC_DEPTHS[gv] + 1) : 1;
        logic [CNT_W-1:0] unused_count;
        logic [CNT_W-1:0] unused_free;

        noc_fifo #(
          .WIDTH(FLIT_W),
          .DEPTH(VC_DEPTHS[gv])
        ) fifo_i (
          .clk   (clk),
          .rst_n (rst_n),
          .push  (fifo_push[gp][gv]),
          .din   (fifo_din[gp][gv]),
          .full  (fifo_full[gp][gv]),
          .pop   (fifo_pop[gp][gv]),
          .dout  (fifo_dout[gp][gv]),
          .empty (fifo_empty[gp][gv]),
          .count (unused_count),
          .free_slots (unused_free)
        );
      end
    end
  endgenerate

  // --- Output register stage ---
  logic [PORTS-1:0]                 out_reg_valid;
  logic [PORTS-1:0][FLIT_W-1:0]    out_reg_flit;

  always_comb begin
    for (int p = 0; p < PORTS; p++) begin
      out_valid[p] = out_reg_valid[p];
      out_flit[p]  = out_reg_flit[p];
    end
  end

  // --- Input capture (clocked) ---
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      in_reg_valid <= '0;
      in_reg_flit  <= '0;
    end else begin
      for (int p = 0; p < PORTS; p++) begin
        if (!in_reg_valid[p] && in_valid[p]) begin
          in_reg_valid[p] <= 1'b1;
          in_reg_flit [p] <= in_flit[p];
        end
      end
    end
  end

  // in_ready asserted when input register free
  always_comb begin
    for (int p = 0; p < PORTS; p++)
      in_ready[p] = !in_reg_valid[p];
  end

  // --- routing function (automatic) ---
  function automatic int route_port(noc_hdr_t hdr);
    // All declarations first (required by SV)
    int mesh_x;
    logic [NODE_ID_W-1:0] dst_node;
    int dst_x;
    int dst_y;

    // then statements
    mesh_x  = MESH_X;
    dst_node = hdr.dst_node;

    dst_x = int'(dst_node) % mesh_x;
    dst_y = int'(dst_node) / mesh_x;
    if (dst_x == X && dst_y == Y)      route_port = 4;
    else if (dst_x != X)               route_port = (dst_x > X) ? 2 : 3;
    else                                route_port = (dst_y > Y) ? 1 : 0;
  endfunction

  // --- Per-output arbitration and selection (VC-indexed arbiter) ---
  for (genvar op = 0; op < PORTS; op++) begin : GEN_OUTPUT_PORT
    logic [NREQ-1:0] req_vec;
    logic [NREQ-1:0] hold_vec;
    logic [NREQ-1:0] grant_vec;
    logic [15:0]     age_vec [NREQ];
    int best_qos;

    // Build candidates and find best QoS level present for this output
    always_comb begin
      // defaults
      req_vec  = '0;
      hold_vec = '0;
      for (int i = 0; i < NREQ; i++) age_vec[i] = 16'd0;
      best_qos = 32'h7fffffff;

      // FIRST PASS: find minimum QoS among candidates destined to this output
      for (int src_p = 0; src_p < PORTS; src_p++) begin
        for (int src_v = 0; src_v < VCS; src_v++) begin
          // temporaries declared and defaulted each iteration to avoid latches
          logic has_candidate;
          logic [FLIT_W-1:0] candidate_flit;
          noc_hdr_t hdr_c;
          noc_hdr_t hdr_reg;
          int dest_port;

          has_candidate  = 1'b0;
          candidate_flit = '0;
          hdr_c          = '0;
          hdr_reg        = '0;
          dest_port      = -1;

          if (!fifo_empty[src_p][src_v]) begin
            has_candidate  = 1'b1;
            candidate_flit = fifo_dout[src_p][src_v];
          end else begin
            if (in_reg_valid[src_p]) begin
              hdr_reg = extract_hdr(in_reg_flit[src_p]);
              // narrow compare to avoid width warnings
              if (hdr_reg.vc == src_v[$bits(hdr_reg.vc)-1:0] && !fifo_full[src_p][src_v]) begin
                has_candidate  = 1'b1;
                candidate_flit = in_reg_flit[src_p];
              end
            end
          end

          if (has_candidate) begin
            hdr_c = extract_hdr(candidate_flit);
            dest_port = route_port(hdr_c);
            if (dest_port == op) begin
              if (VC_QOS[src_v] < best_qos) best_qos = VC_QOS[src_v];
            end
          end
        end
      end

      // SECOND PASS: set VC-indexed requests for VCs that have candidates to this output and match best_qos
      for (int src_p = 0; src_p < PORTS; src_p++) begin
        for (int src_v = 0; src_v < VCS; src_v++) begin
          logic has_candidate;
          logic [FLIT_W-1:0] candidate_flit;
          noc_hdr_t hdr_c;
          noc_hdr_t hdr_reg;
          int dest_port;

          has_candidate  = 1'b0;
          candidate_flit = '0;
          hdr_c          = '0;
          hdr_reg        = '0;
          dest_port      = -1;

          if (!fifo_empty[src_p][src_v]) begin
            has_candidate  = 1'b1;
            candidate_flit = fifo_dout[src_p][src_v];
          end else begin
            if (in_reg_valid[src_p]) begin
              hdr_reg = extract_hdr(in_reg_flit[src_p]);
              if (hdr_reg.vc == src_v[$bits(hdr_reg.vc)-1:0] && !fifo_full[src_p][src_v]) begin
                has_candidate = 1'b1;
                candidate_flit = in_reg_flit[src_p];
              end
            end
          end

          if (has_candidate) begin
            hdr_c = extract_hdr(candidate_flit);
            dest_port = route_port(hdr_c);
            if (dest_port == op && VC_QOS[src_v] == best_qos) begin
              req_vec[src_v]  = 1'b1;
              hold_vec[src_v] = hold_vec[src_v] | (!hdr_c.last);
            end
          end
        end
      end
    end // always_comb

    // instantiate VC-indexed WRR arbiter
    noc_wrr_arbiter #(
      .N(NREQ),
      .WEIGHTS(VC_WEIGHTS)
    ) arb_i (
      .clk(clk),
      .rst_n(rst_n),
      .req(req_vec),
      .hold(hold_vec),
      .grant(grant_vec)
    );

    // pick selected VC index from arbiter (one-hot expected)
    logic signed [31:0] selected_vc;
    always_comb begin
      selected_vc = -1;
      for (int k = 0; k < NREQ; k++) begin
        if (grant_vec[k]) begin
          selected_vc = k;
          break;
        end
      end
    end

    // candidate flit/valid: find first source port that can supply flit for selected VC and dest==op
    logic [FLIT_W-1:0] candidate_flit_out;
    logic              candidate_valid_out;
always_comb begin
  // ---- ALL DECLARATIONS FIRST ----
  noc_hdr_t h;
  noc_hdr_t hr;
  int dest_port;

  // ---- DEFAULT ASSIGNMENTS ----
  candidate_valid_out = 1'b0;
  candidate_flit_out  = '0;

  h         = '0;
  hr        = '0;
  dest_port = -1;

  // ---- LOGIC ----
  if (selected_vc >= 0 && selected_vc < VCS) begin
    for (int sip = 0; sip < PORTS; sip++) begin

      if (!fifo_empty[sip][selected_vc]) begin
        h = extract_hdr(fifo_dout[sip][selected_vc]);
        dest_port = route_port(h);

        if (dest_port == op) begin
          candidate_valid_out = 1'b1;
          candidate_flit_out  = fifo_dout[sip][selected_vc];
          break;
        end
      end
      else if (in_reg_valid[sip]) begin
        hr = extract_hdr(in_reg_flit[sip]);

        if (hr.vc == selected_vc[$bits(hr.vc)-1:0] &&
            !fifo_full[sip][selected_vc]) begin

          dest_port = route_port(hr);

          if (dest_port == op) begin
            candidate_valid_out = 1'b1;
            candidate_flit_out  = in_reg_flit[sip];
            break;
          end
        end
      end

    end
  end
end

    // synchronous capture, pop and in_reg consume
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        out_reg_valid[op] <= 1'b0;
        out_reg_flit [op] <= '0;
        for (int sp = 0; sp < PORTS; sp++) for (int sv = 0; sv < VCS; sv++) fifo_pop[sp][sv] <= 1'b0;
      end else begin
        // default no pops
        for (int sp = 0; sp < PORTS; sp++) for (int sv = 0; sv < VCS; sv++) fifo_pop[sp][sv] <= 1'b0;

        // release when downstream accepts
        if (out_reg_valid[op] && out_ready[op]) begin
          out_reg_valid[op] <= 1'b0;
          out_reg_flit [op] <= '0;
        end

        if (!out_reg_valid[op] && candidate_valid_out) begin
          out_reg_valid[op] <= 1'b1;
          out_reg_flit [op] <= candidate_flit_out;

          // consume source: prefer FIFO pop; else consume input reg
          if (selected_vc >= 0 && selected_vc < VCS) begin
            for (int sip = 0; sip < PORTS; sip++) begin
              noc_hdr_t h;
              int dest_port;
              h = '0;
              dest_port = -1;

              if (!fifo_empty[sip][selected_vc]) begin
                h = extract_hdr(fifo_dout[sip][selected_vc]);
                dest_port = route_port(h);
                if (dest_port == op) begin
                  fifo_pop[sip][selected_vc] <= 1'b1;
                  break;
                end
              end else begin
                if (in_reg_valid[sip]) begin
                  noc_hdr_t hr;
                  hr = extract_hdr(in_reg_flit[sip]);
                  if (hr.vc == selected_vc[$bits(hr.vc)-1:0] && !fifo_full[sip][selected_vc]) begin
                    dest_port = route_port(hr);
                    if (dest_port == op) begin
                      in_reg_valid[sip] <= 1'b0;
                      in_reg_flit [sip] <= '0;
                      break;
                    end
                  end
                end
              end
            end
          end
        end
      end
    end

    // push input regs into FIFO when possible (single-owner)
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        for (int sp = 0; sp < PORTS; sp++)
          for (int sv = 0; sv < VCS; sv++) begin
            fifo_push[sp][sv] <= 1'b0;
            fifo_din [sp][sv] <= '0;
          end
      end else begin
        // default
        for (int sp = 0; sp < PORTS; sp++)
          for (int sv = 0; sv < VCS; sv++) begin
            fifo_push[sp][sv] <= 1'b0;
            fifo_din [sp][sv]  <= '0;
          end

        for (int sp = 0; sp < PORTS; sp++) begin
          if (in_reg_valid[sp]) begin
            noc_hdr_t hdr_r;
            logic [VC_ID_W-1:0] want_vc;
            hdr_r = extract_hdr(in_reg_flit[sp]);
            want_vc = hdr_r.vc;
            if (!fifo_full[sp][want_vc]) begin
              fifo_push[sp][want_vc] <= 1'b1;
              fifo_din [sp][want_vc] <= in_reg_flit[sp];
              in_reg_valid[sp] <= 1'b0;
              in_reg_flit [sp] <= '0;
            end
          end
        end
      end
    end

  end // GEN_OUTPUT_PORT

endmodule