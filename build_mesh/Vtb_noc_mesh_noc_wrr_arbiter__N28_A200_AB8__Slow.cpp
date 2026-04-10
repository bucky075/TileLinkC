// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_noc_mesh.h for the primary calling header

#include "Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8.h"
#include "Vtb_noc_mesh__Syms.h"

//==========

VL_CTOR_IMP(Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8::__Vconfigure(Vtb_noc_mesh__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8::~Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8() {
}

void Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_noc_mesh_noc_wrr_arbiter__N28_A200_AB8::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    req = VL_RAND_RESET_Q(40);
    hold = VL_RAND_RESET_Q(40);
    { int __Vi0=0; for (; __Vi0<40; ++__Vi0) {
            age[__Vi0] = VL_RAND_RESET_I(16);
    }}
    grant = VL_RAND_RESET_Q(40);
}
