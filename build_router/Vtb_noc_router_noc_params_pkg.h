// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_noc_router.h for the primary calling header

#ifndef _VTB_NOC_ROUTER_NOC_PARAMS_PKG_H_
#define _VTB_NOC_ROUTER_NOC_PARAMS_PKG_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtb_noc_router__Syms;
class Vtb_noc_router_VerilatedVcd;


//----------

VL_MODULE(Vtb_noc_router_noc_params_pkg) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vtb_noc_router__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    IData/*31:0*/ __PVT__VC_DEPTHS[8];
    IData/*31:0*/ __PVT__VC_WEIGHTS[8];
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb_noc_router_noc_params_pkg);  ///< Copying not allowed
  public:
    Vtb_noc_router_noc_params_pkg(const char* name = "TOP");
    ~Vtb_noc_router_noc_params_pkg();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtb_noc_router__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__noc_params_pkg__1(Vtb_noc_router__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
