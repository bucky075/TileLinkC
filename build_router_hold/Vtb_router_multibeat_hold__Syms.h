// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ROUTER_MULTIBEAT_HOLD__SYMS_H_
#define VERILATED_VTB_ROUTER_MULTIBEAT_HOLD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_router_multibeat_hold.h"

// INCLUDE MODULE CLASSES
#include "Vtb_router_multibeat_hold___024root.h"
#include "Vtb_router_multibeat_hold_noc_params_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_router_multibeat_hold__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_router_multibeat_hold* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_router_multibeat_hold___024root TOP;
    Vtb_router_multibeat_hold_noc_params_pkg TOP__noc_params_pkg;

    // CONSTRUCTORS
    Vtb_router_multibeat_hold__Syms(VerilatedContext* contextp, const char* namep, Vtb_router_multibeat_hold* modelp);
    ~Vtb_router_multibeat_hold__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
