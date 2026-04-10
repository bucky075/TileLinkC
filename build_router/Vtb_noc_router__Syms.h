// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTB_NOC_ROUTER__SYMS_H_
#define _VTB_NOC_ROUTER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtb_noc_router.h"
#include "Vtb_noc_router_noc_params_pkg.h"

// SYMS CLASS
class Vtb_noc_router__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtb_noc_router*                TOPp;
    Vtb_noc_router_noc_params_pkg  TOP__noc_params_pkg;
    
    // CREATORS
    Vtb_noc_router__Syms(Vtb_noc_router* topp, const char* namep);
    ~Vtb_noc_router__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
