// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTB_NOC_FIFO_H_
#define _VTB_NOC_FIFO_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtb_noc_fifo__Syms;
class Vtb_noc_fifo_VerilatedVcd;
class Vtb_noc_fifo_noc_params_pkg;


//----------

VL_MODULE(Vtb_noc_fifo) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtb_noc_fifo_noc_params_pkg* __PVT__noc_params_pkg;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ tb_noc_fifo__DOT__rst_n;
    CData/*0:0*/ tb_noc_fifo__DOT__push;
    CData/*0:0*/ tb_noc_fifo__DOT__pop;
    CData/*0:0*/ tb_noc_fifo__DOT__full;
    CData/*0:0*/ tb_noc_fifo__DOT__empty;
    CData/*1:0*/ tb_noc_fifo__DOT__dut__DOT__rd_ptr;
    CData/*1:0*/ tb_noc_fifo__DOT__dut__DOT__wr_ptr;
    CData/*2:0*/ tb_noc_fifo__DOT__dut__DOT__cnt;
    CData/*0:0*/ tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_push;
    CData/*0:0*/ tb_noc_fifo__DOT__dut__DOT__unnamedblk2__DOT__do_pop;
    WData/*127:0*/ tb_noc_fifo__DOT__din[4];
    IData/*31:0*/ tb_noc_fifo__DOT__results_fd;
    IData/*31:0*/ tb_noc_fifo__DOT__cycle;
    IData/*31:0*/ tb_noc_fifo__DOT__dut__DOT__unnamedblk1__DOT__i;
    WData/*127:0*/ tb_noc_fifo__DOT__dut__DOT__mem[4][4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__tb_noc_fifo__DOT__rst_n;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__tb_noc_fifo__DOT__rst_n;
    CData/*0:0*/ __Vchglast__TOP__tb_noc_fifo__DOT__rst_n;
    IData/*31:0*/ __Vdly__tb_noc_fifo__DOT__cycle;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtb_noc_fifo__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb_noc_fifo);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtb_noc_fifo(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtb_noc_fifo();
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
    static void _eval_initial_loop(Vtb_noc_fifo__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtb_noc_fifo__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtb_noc_fifo__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtb_noc_fifo__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtb_noc_fifo__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtb_noc_fifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtb_noc_fifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtb_noc_fifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vtb_noc_fifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtb_noc_fifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtb_noc_fifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vtb_noc_fifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
