// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnoc_params__pch.h"

//============================================================
// Constructors

Vnoc_params::Vnoc_params(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnoc_params__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnoc_params::Vnoc_params(const char* _vcname__)
    : Vnoc_params(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnoc_params::~Vnoc_params() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnoc_params___024root___eval_debug_assertions(Vnoc_params___024root* vlSelf);
#endif  // VL_DEBUG
void Vnoc_params___024root___eval_static(Vnoc_params___024root* vlSelf);
void Vnoc_params___024root___eval_initial(Vnoc_params___024root* vlSelf);
void Vnoc_params___024root___eval_settle(Vnoc_params___024root* vlSelf);
void Vnoc_params___024root___eval(Vnoc_params___024root* vlSelf);

void Vnoc_params::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnoc_params::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnoc_params___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnoc_params___024root___eval_static(&(vlSymsp->TOP));
        Vnoc_params___024root___eval_initial(&(vlSymsp->TOP));
        Vnoc_params___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnoc_params___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnoc_params::eventsPending() { return false; }

uint64_t Vnoc_params::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnoc_params::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnoc_params___024root___eval_final(Vnoc_params___024root* vlSelf);

VL_ATTR_COLD void Vnoc_params::final() {
    Vnoc_params___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnoc_params::hierName() const { return vlSymsp->name(); }
const char* Vnoc_params::modelName() const { return "Vnoc_params"; }
unsigned Vnoc_params::threads() const { return 1; }
void Vnoc_params::prepareClone() const { contextp()->prepareClone(); }
void Vnoc_params::atClone() const {
    contextp()->threadPoolpOnClone();
}
