// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_tlc_noc_adapter__pch.h"

//============================================================
// Constructors

Vtb_tlc_noc_adapter::Vtb_tlc_noc_adapter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_tlc_noc_adapter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_tlc_noc_adapter::Vtb_tlc_noc_adapter(const char* _vcname__)
    : Vtb_tlc_noc_adapter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_tlc_noc_adapter::~Vtb_tlc_noc_adapter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_tlc_noc_adapter___024root___eval_debug_assertions(Vtb_tlc_noc_adapter___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_tlc_noc_adapter___024root___eval_static(Vtb_tlc_noc_adapter___024root* vlSelf);
void Vtb_tlc_noc_adapter___024root___eval_initial(Vtb_tlc_noc_adapter___024root* vlSelf);
void Vtb_tlc_noc_adapter___024root___eval_settle(Vtb_tlc_noc_adapter___024root* vlSelf);
void Vtb_tlc_noc_adapter___024root___eval(Vtb_tlc_noc_adapter___024root* vlSelf);

void Vtb_tlc_noc_adapter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_tlc_noc_adapter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_tlc_noc_adapter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_tlc_noc_adapter___024root___eval_static(&(vlSymsp->TOP));
        Vtb_tlc_noc_adapter___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_tlc_noc_adapter___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_tlc_noc_adapter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_tlc_noc_adapter::eventsPending() { return false; }

uint64_t Vtb_tlc_noc_adapter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_tlc_noc_adapter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_tlc_noc_adapter___024root___eval_final(Vtb_tlc_noc_adapter___024root* vlSelf);

VL_ATTR_COLD void Vtb_tlc_noc_adapter::final() {
    Vtb_tlc_noc_adapter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_tlc_noc_adapter::hierName() const { return vlSymsp->name(); }
const char* Vtb_tlc_noc_adapter::modelName() const { return "Vtb_tlc_noc_adapter"; }
unsigned Vtb_tlc_noc_adapter::threads() const { return 1; }
void Vtb_tlc_noc_adapter::prepareClone() const { contextp()->prepareClone(); }
void Vtb_tlc_noc_adapter::atClone() const {
    contextp()->threadPoolpOnClone();
}
