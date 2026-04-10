// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_router_multibeat_hold__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_router_multibeat_hold::Vtb_router_multibeat_hold(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_router_multibeat_hold__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , __PVT__noc_params_pkg{vlSymsp->TOP.__PVT__noc_params_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_router_multibeat_hold::Vtb_router_multibeat_hold(const char* _vcname__)
    : Vtb_router_multibeat_hold(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_router_multibeat_hold::~Vtb_router_multibeat_hold() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_router_multibeat_hold___024root___eval_debug_assertions(Vtb_router_multibeat_hold___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_router_multibeat_hold___024root___eval_static(Vtb_router_multibeat_hold___024root* vlSelf);
void Vtb_router_multibeat_hold___024root___eval_initial(Vtb_router_multibeat_hold___024root* vlSelf);
void Vtb_router_multibeat_hold___024root___eval_settle(Vtb_router_multibeat_hold___024root* vlSelf);
void Vtb_router_multibeat_hold___024root___eval(Vtb_router_multibeat_hold___024root* vlSelf);

void Vtb_router_multibeat_hold::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_router_multibeat_hold::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_router_multibeat_hold___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_router_multibeat_hold___024root___eval_static(&(vlSymsp->TOP));
        Vtb_router_multibeat_hold___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_router_multibeat_hold___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_router_multibeat_hold___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_router_multibeat_hold::eventsPending() { return false; }

uint64_t Vtb_router_multibeat_hold::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_router_multibeat_hold::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_router_multibeat_hold___024root___eval_final(Vtb_router_multibeat_hold___024root* vlSelf);

VL_ATTR_COLD void Vtb_router_multibeat_hold::final() {
    Vtb_router_multibeat_hold___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_router_multibeat_hold::hierName() const { return vlSymsp->name(); }
const char* Vtb_router_multibeat_hold::modelName() const { return "Vtb_router_multibeat_hold"; }
unsigned Vtb_router_multibeat_hold::threads() const { return 1; }
void Vtb_router_multibeat_hold::prepareClone() const { contextp()->prepareClone(); }
void Vtb_router_multibeat_hold::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_router_multibeat_hold::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_router_multibeat_hold___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_router_multibeat_hold___024root__trace_init_top(Vtb_router_multibeat_hold___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_router_multibeat_hold___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_router_multibeat_hold___024root*>(voidSelf);
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_router_multibeat_hold___024root__trace_decl_types(tracep);
    Vtb_router_multibeat_hold___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_router_multibeat_hold___024root__trace_register(Vtb_router_multibeat_hold___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_router_multibeat_hold::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_router_multibeat_hold::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 2483);
    Vtb_router_multibeat_hold___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
