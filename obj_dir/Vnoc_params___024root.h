// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnoc_params.h for the primary calling header

#ifndef VERILATED_VNOC_PARAMS___024ROOT_H_
#define VERILATED_VNOC_PARAMS___024ROOT_H_  // guard

#include "verilated.h"


class Vnoc_params__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnoc_params___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__clk;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__rst_n;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__a_valid;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__a_ready;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__noc_req_ready;
        CData/*3:0*/ tb_tlc_noc_adapter__DOT__state;
        CData/*1:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__send_state;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid;
        CData/*4:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats;
        CData/*4:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx;
        CData/*7:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__d_size_accum;
        CData/*4:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_valid_r;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r;
        CData/*2:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_alloc_ptr;
        CData/*7:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__sink_in_use;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req;
        CData/*7:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size;
        CData/*2:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode;
        CData/*2:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param;
        CData/*0:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__out_valid_reg;
        CData/*2:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__chosen_sink;
        CData/*0:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf_valid;
        CData/*4:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_total_beats;
        CData/*4:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_beat_idx;
        CData/*1:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__send_state;
        CData/*0:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_valid_r;
        CData/*0:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__b_valid_r;
        CData/*4:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_beats_seen;
        CData/*0:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__processing_req;
        CData/*7:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_size;
        CData/*2:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_opcode;
        CData/*2:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_param;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tlc_noc_adapter__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter;
        IData/*25:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__req_hdr;
        VlWide<8>/*229:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__req_payload;
        IData/*25:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__resp_hdr;
        VlWide<8>/*229:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__resp_payload;
        VlWide<8>/*255:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__noc_req_flit_r;
        IData/*25:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__in_hdr;
        VlWide<8>/*229:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__in_payload;
        IData/*31:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn;
        IData/*25:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__out_hdr;
        VlWide<8>/*229:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__out_payload;
        VlWide<8>/*255:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__out_flit_reg;
        IData/*31:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__i;
        IData/*31:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr_word;
        IData/*31:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__unnamedblk2__DOT__unnamedblk4__DOT__addr_word_w;
        IData/*31:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__txn_counter;
        IData/*31:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_txn;
        IData/*31:0*/ __VactIterCount;
        VlWide<5>/*153:0*/ tb_tlc_noc_adapter__DOT__a_bits;
        QData/*63:0*/ tb_tlc_noc_adapter__DOT__addr;
        QData/*63:0*/ tb_tlc_noc_adapter__DOT__data_write;
        VlWide<5>/*153:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf;
        VlWide<3>/*85:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum;
        VlWide<3>/*85:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__d_out_r;
    };
    struct {
        VlWide<5>/*153:0*/ tb_tlc_noc_adapter__DOT__client_i__DOT__b_bits_r;
        QData/*63:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data;
        QData/*63:0*/ tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low;
        VlWide<5>/*153:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__req_buf;
        VlWide<3>/*85:0*/ __Vdly__tb_tlc_noc_adapter__DOT__client_i__DOT__d_accum;
        QData/*63:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_data;
        QData/*63:0*/ __Vdly__tb_tlc_noc_adapter__DOT__manager_i__DOT__req_addr_low;
        VlUnpacked<QData/*63:0*/, 1024> tb_tlc_noc_adapter__DOT__manager_i__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<QData/*63:0*/, 1024>, false, QData/*63:0*/, 1> __VdlyCommitQueuetb_tlc_noc_adapter__DOT__manager_i__DOT__mem;

    // INTERNAL VARIABLES
    Vnoc_params__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnoc_params___024root(Vnoc_params__Syms* symsp, const char* namep);
    ~Vnoc_params___024root();
    VL_UNCOPYABLE(Vnoc_params___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
