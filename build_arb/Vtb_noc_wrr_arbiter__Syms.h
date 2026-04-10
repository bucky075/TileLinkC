// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTB_NOC_WRR_ARBITER__SYMS_H_
#define _VTB_NOC_WRR_ARBITER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtb_noc_wrr_arbiter.h"

// SYMS CLASS
class Vtb_noc_wrr_arbiter__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtb_noc_wrr_arbiter*           TOPp;
    
    // CREATORS
    Vtb_noc_wrr_arbiter__Syms(Vtb_noc_wrr_arbiter* topp, const char* namep);
    ~Vtb_noc_wrr_arbiter__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
