// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tl_end_to_end.h for the primary calling header

#ifndef VERILATED_VTB_TL_END_TO_END___024ROOT_H_
#define VERILATED_VTB_TL_END_TO_END___024ROOT_H_  // guard

#include "verilated.h"
class Vtb_tl_end_to_end_noc_params_pkg;


class Vtb_tl_end_to_end__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tl_end_to_end___024root final {
  public:
    // CELLS
    Vtb_tl_end_to_end_noc_params_pkg* __PVT__noc_params_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ tb_tl_end_to_end__DOT__c_noc_out_valid;
    CData/*0:0*/ tb_tl_end_to_end__DOT__m_noc_out_valid;
    CData/*0:0*/ tb_tl_end_to_end__DOT__a_valid;
    CData/*0:0*/ tb_tl_end_to_end__DOT__d_valid;
    CData/*0:0*/ tb_tl_end_to_end__DOT__m_a_valid;
    CData/*0:0*/ tb_tl_end_to_end__DOT__m_d_valid;
    CData/*0:0*/ tb_tl_end_to_end__DOT__client__DOT__a_ready;
    CData/*1:0*/ tb_tl_end_to_end__DOT__client__DOT__state;
    CData/*0:0*/ tb_tl_end_to_end__DOT__client__DOT__a_reg_valid;
    CData/*0:0*/ tb_tl_end_to_end__DOT__manager__DOT__a_pulse;
    CData/*0:0*/ tb_tl_end_to_end__DOT__manager__DOT__a_has_reg;
    CData/*0:0*/ tb_tl_end_to_end__DOT__manager__DOT__present_a;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VlWide<4>/*127:0*/ tb_tl_end_to_end__DOT__c_noc_out_flit;
    VlWide<4>/*127:0*/ tb_tl_end_to_end__DOT__m_noc_out_flit;
    IData/*31:0*/ tb_tl_end_to_end__DOT__cycle;
    IData/*31:0*/ tb_tl_end_to_end__DOT__client__DOT__total_beats;
    IData/*31:0*/ tb_tl_end_to_end__DOT__client__DOT__beat_index;
    VlWide<3>/*91:0*/ tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg;
    VlWide<3>/*91:0*/ tb_tl_end_to_end__DOT__manager__DOT__payload;
    IData/*31:0*/ __Vdly__tb_tl_end_to_end__DOT__cycle;
    IData/*31:0*/ __VactIterCount;
    VlWide<7>/*210:0*/ tb_tl_end_to_end__DOT__a_bits;
    VlWide<5>/*155:0*/ tb_tl_end_to_end__DOT__d_bits;
    VlWide<7>/*210:0*/ tb_tl_end_to_end__DOT__m_a_bits;
    VlWide<5>/*155:0*/ tb_tl_end_to_end__DOT__m_d_bits;
    VlWide<7>/*210:0*/ tb_tl_end_to_end__DOT__client__DOT__a_reg;
    QData/*35:0*/ tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr;
    QData/*35:0*/ tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr;
    QData/*35:0*/ tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg;
    QData/*35:0*/ tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr;
    VlWide<7>/*210:0*/ __Vdly__tb_tl_end_to_end__DOT__client__DOT__a_reg;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtb_tl_end_to_end__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_tl_end_to_end___024root(Vtb_tl_end_to_end__Syms* symsp, const char* namep);
    ~Vtb_tl_end_to_end___024root();
    VL_UNCOPYABLE(Vtb_tl_end_to_end___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
