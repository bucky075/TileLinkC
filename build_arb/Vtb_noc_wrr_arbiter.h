// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTB_NOC_WRR_ARBITER_H_
#define _VTB_NOC_WRR_ARBITER_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtb_noc_wrr_arbiter__Syms;
class Vtb_noc_wrr_arbiter_VerilatedVcd;


//----------

VL_MODULE(Vtb_noc_wrr_arbiter) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ tb_noc_wrr_arbiter__DOT__rst_n;
    CData/*3:0*/ tb_noc_wrr_arbiter__DOT__req;
    CData/*3:0*/ tb_noc_wrr_arbiter__DOT__hold;
    CData/*3:0*/ tb_noc_wrr_arbiter__DOT__grant;
    CData/*1:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__rr_ptr;
    CData/*0:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk4__DOT__found_grant;
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__cycle;
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__i;
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__i;
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__k;
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx;
    SData/*15:0*/ tb_noc_wrr_arbiter__DOT__age[4];
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__grant_count[4];
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__deficit[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vdly__tb_noc_wrr_arbiter__DOT__req;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v0;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v4;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v5;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v6;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__age__v7;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v4;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v5;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v6;
    CData/*0:0*/ __Vdlyvset__tb_noc_wrr_arbiter__DOT__grant_count__v7;
    CData/*0:0*/ __VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__tb_noc_wrr_arbiter__DOT__rst_n;
    CData/*0:0*/ __Vchglast__TOP__tb_noc_wrr_arbiter__DOT__rst_n;
    IData/*31:0*/ __Vdly__tb_noc_wrr_arbiter__DOT__cycle;
    SData/*15:0*/ tb_noc_wrr_arbiter__DOT____Vcellinp__dut__age[4];
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtb_noc_wrr_arbiter__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    IData/*31:0*/ tb_noc_wrr_arbiter__DOT__dut__DOT__WEIGHTS[4];
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb_noc_wrr_arbiter);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtb_noc_wrr_arbiter(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtb_noc_wrr_arbiter();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtb_noc_wrr_arbiter__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vtb_noc_wrr_arbiter__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
