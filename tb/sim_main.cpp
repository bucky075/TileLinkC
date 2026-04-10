// // sim_main.cpp
// // Verilator-based test harness for the NoC mesh (top: noc_mesh_xy).
// // Contains deterministic, scripted scenarios exercising:
// //  - single-beat delivery
// //  - multi-beat A burst and D response
// //  - contention among multiple sources
// //  - backpressure stress toggling local_out_ready
// //  - QoS saturation sketch (measurement counters)
// // Notes:
// //  - This file assumes Verilator-generated model named Vnoc_mesh_xy.
// //  - It uses unsigned __int128 to build 128-bit flits (GCC/Clang extension).
// //  - You may need to tweak signal-access lines depending on how Verilator flattens multi-dimensional ports.
// // Build (example):
// // verilator -Wall --cc --sv --top-module noc_mesh_xy \
// //   noc_params.sv noc_flit.sv noc_fifo.sv noc_link_reg.sv \
// //   noc_wrr_arbiter.sv noc_adaptive_route.sv noc_router_xy_vc.sv noc_mesh_xy.sv \
// //   tlc_noc_adapter.sv \
// //   --exe sim_main.cpp
// // make -C obj_dir -f Vnoc_mesh_xy.mk
// // ./obj_dir/Vnoc_mesh_xy
// //
// // Deterministic seed:
// static const unsigned SEED = 12345u;

// #include "Vnoc_mesh_xy.h"
// #include "verilated.h"
// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <cstdint>
// #include <cassert>
// #include <random>

// using namespace std;

// // Replica of key NoC parameter constants from SV packages (must match)
// constexpr int MESH_X = 4;
// constexpr int MESH_Y = 4;
// constexpr int NUM_NODES = MESH_X * MESH_Y;
// constexpr int FLIT_WIDTH = 128;
// constexpr int NODE_ID_WIDTH = 4;
// constexpr int TXN_ID_WIDTH = 32;
// constexpr int HDR_WIDTH = (NODE_ID_WIDTH + NODE_ID_WIDTH + TXN_ID_WIDTH + 3 + 3 + 1 + 1); // 4+4+32+3+3+1+1=48
// constexpr int PAYLOAD_WIDTH = FLIT_WIDTH - HDR_WIDTH; // 80

// // Helper to build header and flit using unsigned __int128
// static inline unsigned __int128 build_flit_u128(uint32_t src_node, uint32_t dst_node,
//                                                 uint32_t txn_id, uint8_t vc, uint8_t pkt_type,
//                                                 bool first, bool last,
//                                                 unsigned __int128 payload /* up to PAYLOAD_WIDTH bits */)
// {
//     // header layout MSB→LSB: src_node[NODE_ID_WIDTH], dst_node[NODE_ID_WIDTH], txn_id[TXN_ID_WIDTH],
//     //                         vc[3], pkt_type[3], first[1], last[1]
//     unsigned __int128 header = 0;
//     header |= (unsigned __int128)(src_node & ((1u<<NODE_ID_WIDTH)-1));
//     header <<= NODE_ID_WIDTH;
//     header |= (unsigned __int128)(dst_node & ((1u<<NODE_ID_WIDTH)-1));
//     header <<= TXN_ID_WIDTH;
//     header |= (unsigned __int128)(txn_id & 0xFFFFFFFFu);
//     header <<= 3;
//     header |= (unsigned __int128)(vc & 0x7u);
//     header <<= 3;
//     header |= (unsigned __int128)(pkt_type & 0x7u);
//     header <<= 1;
//     header |= (unsigned __int128)(first ? 1u : 0u);
//     header <<= 1;
//     header |= (unsigned __int128)(last ? 1u : 0u);

//     // header now contains HDR_WIDTH bits (placed LSB-aligned). We need to left-shift header to occupy the MSB HDR_WIDTH bits of the 128-bit flit:
//     // flit = (header << PAYLOAD_WIDTH) | (payload & ((1<<PAYLOAD_WIDTH)-1))
//     unsigned __int128 flit = (header << PAYLOAD_WIDTH) | (payload & ((((unsigned __int128)1)<<PAYLOAD_WIDTH)-1));
//     return flit;
// }

// // Extract helper (for host-side checking)
// static inline void unpack_flit_u128(unsigned __int128 flit,
//                                     uint32_t &src_node, uint32_t &dst_node,
//                                     uint32_t &txn_id, uint8_t &vc, uint8_t &pkt_type,
//                                     bool &first, bool &last,
//                                     unsigned __int128 &payload)
// {
//     payload = flit & ((((unsigned __int128)1)<<PAYLOAD_WIDTH)-1);
//     unsigned __int128 header = flit >> PAYLOAD_WIDTH;
//     // unfold header in reverse order
//     last = (header & 1) != 0;
//     header >>= 1;
//     first = (header & 1) != 0;
//     header >>= 1;
//     pkt_type = (uint8_t)(header & 0x7);
//     header >>= 3;
//     vc = (uint8_t)(header & 0x7);
//     header >>= 3;
//     txn_id = (uint32_t)(header & 0xFFFFFFFFu);
//     header >>= TXN_ID_WIDTH;
//     dst_node = (uint32_t)(header & ((1u<<NODE_ID_WIDTH)-1));
//     header >>= NODE_ID_WIDTH;
//     src_node = (uint32_t)(header & ((1u<<NODE_ID_WIDTH)-1));
// }

// // Small wrapper to set a 128-bit port on Verilated model
// // Verilator flattens SystemVerilog packed vector ports into multiple 64-bit words. The exact generated names vary.
// // We attempt to set by providing both halves if such fields exist; if not, the user may need to adapt.
// static void set_local_in_flit(Vnoc_mesh_xy* top, int node, unsigned __int128 flit)
// {
//     // Try common naming conventions:
//     //  - local_in_flit_hi / local_in_flit_lo per node
//     //  - local_in_flit[node][1] / [0] flattened arrays (less likely)
//     // We'll attempt to detect and write whichever exists. If compilation fails, adjust per Verilator output.

//     uint64_t hi = (uint64_t)(flit >> 64);
//     uint64_t lo = (uint64_t)(flit & 0xFFFFFFFFFFFFFFFFull);

//     // Attempt 1: two arrays local_in_flit_hi[], local_in_flit_lo[]
//     // (Uncomment and adapt if your generated model exposes these)
//     // top->local_in_flit_hi[node] = hi;
//     // top->local_in_flit_lo[node] = lo;

//     // Attempt 2: single flattened array local_in_flit[node]
//     // If compiled symbol exists as unsigned long long local_in_flit[NUM_NODES], use direct assignment
//     // top->local_in_flit[node] = flit; // may not compile

//     // Generic fallback: print flit and ask user to wire signals if needed
//     // Because exact Verilator member names are environment-dependent, we print the flit for manual injection if needed.
//     cout << "DBG: set_local_in_flit node=" << node << " hi=0x" << hex << hi << " lo=0x" << lo << dec << "\n";
//     // If your Verilator model exposes direct fields, modify this function accordingly.
// }

// int main(int argc, char **argv)
// {
//     Verilated::commandArgs(argc, argv);
//     Vnoc_mesh_xy* top = new Vnoc_mesh_xy;

//     // RNG
//     std::mt19937_64 rng(SEED);
//     std::uniform_int_distribution<uint64_t> ud64(0);

//     // initialize
//     top->clk = 0;
//     top->rst_n = 0;

//     // initialize local_in_valid/out_ready arrays if available (best-effort)
//     // Many member names depend on Verilator flattening. The user may need to adapt these assignments.

//     // apply reset for few cycles
//     for (int i=0;i<10;i++) {
//         top->clk = !top->clk;
//         top->rst_n = 0;
//         top->eval();
//     }
//     top->rst_n = 1;
//     top->clk = 0;
//     top->eval();

//     // Basic single-beat test: node0 -> node5
//     {
//         cout << "=== Single-beat delivery test (node0 -> node5) ===\n";
//         uint32_t src = 0;
//         uint32_t dst = 5;
//         uint32_t txn = 0xA5A5A5A5u;
//         uint8_t vc = 3; // REQ_HIGH
//         uint8_t pkt = 0; // arbitrary
//         bool first = true, last = true;
//         unsigned __int128 payload = 0;
//         // small payload pattern
//         payload = (((unsigned __int128)0xdeadbeefdeadull) << 16) | (unsigned __int128)(0xBEEF);
//         unsigned __int128 flit = build_flit_u128(src,dst,txn,vc,pkt,first,last,payload);

//         // inject - user may need to adapt set_local_in_flit to actual Verilator members
//         set_local_in_flit(top, 0, flit);

//         // raise local_in_valid for node 0 if available
//         // e.g., top->local_in_valid[0] = 1;
//         cout << "Injected flit from node 0 -> 5 (txn=0x" << hex << txn << dec << ")\n";

//         // step simulation for several cycles to let mesh route flit
//         for (int t=0; t<50; t++) {
//             top->clk = !top->clk;
//             top->eval();
//         }
//         cout << "Single-beat test completed (check local_out_valid on dst node in waveform or adapt harness to read outputs).\n";
//     }

//     // Multi-beat A burst test (4 beats) from a tile -> L3 and D response
//     {
//         cout << "=== Multi-beat A burst (4 beats) from node1 -> node6 ===\n";
//         uint32_t src = 1;
//         uint32_t dst = 6;
//         uint32_t txn = 0x11112222u;
//         uint8_t vc = 3;
//         uint8_t pkt = 0;
//         const int beats = 4;
//         for (int b=0; b<beats; b++) {
//             bool first = (b==0);
//             bool last  = (b==beats-1);
//             unsigned __int128 payload = (((unsigned __int128)0xCAFEBABEull) << 32) | (unsigned __int128)(b);
//             unsigned __int128 f = build_flit_u128(src,dst,txn,vc,pkt,first,last,payload);
//             set_local_in_flit(top, src, f);
//             // pulse local_in_valid appropriately if available
//             // simulate a few cycles between beats so pipeline can accept them
//             for (int t=0; t<4; t++) { top->clk = !top->clk; top->eval(); }
//         }
//         cout << "Injected multi-beat A. Now wait for D response injection simulation (not automated here).\n";
//         for (int t=0; t<200; t++) { top->clk = !top->clk; top->eval(); }
//     }

//     // Contention test: nodes 0,1,2 -> same dst simultaneously
//     {
//         cout << "=== Contention test: nodes 0,1,2 -> dst 7 ===\n";
//         uint32_t dst = 7;
//         for (int nid=0;nid<3;nid++) {
//             uint32_t src = nid;
//             uint32_t txn = 0x1000 + nid;
//             unsigned __int128 payload = (unsigned __int128)(0x100 + nid);
//             unsigned __int128 f = build_flit_u128(src,dst,txn,3,0,true,true,payload);
//             set_local_in_flit(top, src, f);
//         }
//         for (int t=0;t<200;t++) { top->clk = !top->clk; top->eval(); }
//         cout << "Contention test completed.\n";
//     }

//     // Backpressure stress: toggle a subset of local_out_ready to zero to simulate congestion
//     cout << "=== Backpressure stress (informational) ===\n";
//     for (int phase=0; phase<4; phase++) {
//         cout << "Phase " << phase << " toggling some endpoints' ready signals (user must wire signals in harness if needed)\n";
//         for (int t=0;t<100;t++) { top->clk = !top->clk; top->eval(); }
//     }

//     // QoS fairness sketch: saturate REQ_HIGH + IO_HIGH from multiple sources
//     cout << "=== QoS saturation sketch (informational) ===\n";
//     // inject many flits from REQ_HIGH (vc=3) and IO_HIGH (vc=6)
//     for (int iter=0; iter<64; iter++) {
//         int src = iter % 8; // use first 8 nodes as senders
//         uint32_t dst = (iter*3) % NUM_NODES;
//         uint32_t txn = 0x2000 + iter;
//         unsigned __int128 payload = (unsigned __int128)(iter);
//         unsigned __int128 f = build_flit_u128(src,dst,txn, (iter%2==0?3:6), 0, true, true, payload);
//         set_local_in_flit(top, src, f);
//         for (int t=0; t<2; t++) { top->clk = !top->clk; top->eval(); }
//     }
//     for (int t=0; t<500; t++) { top->clk = !top->clk; top->eval(); }
//     cout << "QoS saturation sketch finished. Check waveforms / counters to verify fairness.\n";

//     // Finalize
//     top->final();
//     delete top;
//     cout << "Simulation finished.\n";
//     return 0;
// }


#include "verilated.h"

#ifndef TOP_MODULE
#error "TOP_MODULE not defined"
#endif

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#include TOSTRING(TOP_MODULE.h)

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    TOP_MODULE* top = new TOP_MODULE;

    while (!Verilated::gotFinish()) {
        top->clk = !top->clk;
        top->eval();
    }

    delete top;
    return 0;
}