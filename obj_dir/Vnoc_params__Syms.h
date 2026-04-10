// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNOC_PARAMS__SYMS_H_
#define VERILATED_VNOC_PARAMS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnoc_params.h"

// INCLUDE MODULE CLASSES
#include "Vnoc_params___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vnoc_params__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnoc_params* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnoc_params___024root          TOP;

    // CONSTRUCTORS
    Vnoc_params__Syms(VerilatedContext* contextp, const char* namep, Vnoc_params* modelp);
    ~Vnoc_params__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
