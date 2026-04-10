// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_tl_end_to_end__Syms.h"


VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_flit_pkg__0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_params_pkg__0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_sub__TOP__tlc_types_pkg__0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_sub__TOP__0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("noc_flit_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_flit_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("noc_params_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_params_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_tl_end_to_end", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"c_noc_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"c_noc_out_flit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"c_noc_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"m_noc_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"m_noc_in_flit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"m_noc_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"m_noc_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+30,0,"m_noc_out_flit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"m_noc_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"c_noc_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+30,0,"c_noc_in_flit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"c_noc_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"a_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"a_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 210,0);
    tracep->declBit(c+5,0,"a_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"d_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+35,0,"d_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 155,0);
    tracep->declBit(c+70,0,"d_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"m_a_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+41,0,"m_a_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 210,0);
    tracep->declBit(c+70,0,"m_a_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"m_d_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+49,0,"m_d_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 155,0);
    tracep->declBit(c+70,0,"m_d_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("client", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"NODE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"a_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"a_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 210,0);
    tracep->declBit(c+5,0,"a_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"d_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+35,0,"d_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 155,0);
    tracep->declBit(c+70,0,"d_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"noc_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"noc_out_flit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"noc_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"noc_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+30,0,"noc_in_flit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"noc_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+54,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 210,0);
    tracep->declBit(c+7,0,"a_reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"total_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"beat_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+10,0,"hdr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+61,0,"hdr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("manager", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"NODE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"noc_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"noc_in_flit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"noc_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"noc_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+30,0,"noc_out_flit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+70,0,"noc_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"a_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+41,0,"a_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 210,0);
    tracep->declBit(c+70,0,"a_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"d_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+49,0,"d_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 155,0);
    tracep->declBit(c+70,0,"d_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"a_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+13,0,"a_hdr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declArray(c+15,0,"a_payload_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 91,0);
    tracep->declBit(c+18,0,"a_has_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"present_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+63,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 91,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+66,0,"ohdr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tlc_types_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__tlc_types_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_sub__TOP__tlc_types_pkg__0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__tlc_types_pkg__0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+72,0,"A_PutFullData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"A_PutPartialData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"A_ArithmeticData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"A_LogicalData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"A_Get",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"A_Hint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"A_AcquireBlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"A_AcquirePerm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"B_PutFullData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"B_PutPartialData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"B_ArithmeticData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"B_LogicalData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"B_Get",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"B_Hint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"B_ProbeBlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"B_ProbePerm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"C_AccessAck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"C_AccessAckData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"C_HintAck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"C_Reserved3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"C_ProbeAck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"C_ProbeAckData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"C_Release",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"C_ReleaseData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"D_AccessAck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"D_AccessAckData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"D_HintAck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"D_Reserved3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"D_Grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"D_GrantData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"D_ReleaseAck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"D_Reserved7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_flit_pkg__0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_flit_pkg__0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+80,0,"HDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+81,0,"PAYLOAD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_params_pkg__0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__noc_params_pkg__0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+82,0,"MESH_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+82,0,"MESH_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+83,0,"NUM_NODES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+82,0,"NODE_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+84,0,"FLIT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+85,0,"NUM_VCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+71,0,"VC_ESCAPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+86,0,"VC_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+87,0,"VC_SYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+88,0,"VC_REQ_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+82,0,"VC_REQ_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+89,0,"VC_RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+90,0,"VC_IO_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+91,0,"VC_IO_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("VC_DEPTHS", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+92+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("VC_WEIGHTS", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+100+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+108,0,"AGE_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+85,0,"AGE_BOOST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+84,0,"TL_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+83,0,"TL_BEAT_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+109,0,"TL_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+85,0,"TL_SOURCE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+85,0,"TL_SINK_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+83,0,"TL_MAX_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+110,0,"TXN_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+72,0,"TL_CH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"TL_CH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"TL_CH_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"TL_CH_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"TL_CH_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_init_top(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_init_top\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tl_end_to_end___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_tl_end_to_end___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_tl_end_to_end___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_register(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_register\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_tl_end_to_end___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_tl_end_to_end___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_tl_end_to_end___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_tl_end_to_end___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_const_0_sub_0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_const_0\n"); );
    // Body
    Vtb_tl_end_to_end___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tl_end_to_end___024root*>(voidSelf);
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_tl_end_to_end___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_const_0_sub_0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_const_0_sub_0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+70,(1U));
    bufp->fullIData(oldp+71,(0U),32);
    bufp->fullCData(oldp+72,(0U),3);
    bufp->fullCData(oldp+73,(1U),3);
    bufp->fullCData(oldp+74,(2U),3);
    bufp->fullCData(oldp+75,(3U),3);
    bufp->fullCData(oldp+76,(4U),3);
    bufp->fullCData(oldp+77,(5U),3);
    bufp->fullCData(oldp+78,(6U),3);
    bufp->fullCData(oldp+79,(7U),3);
    bufp->fullIData(oldp+80,(0x00000024U),32);
    bufp->fullIData(oldp+81,(0x0000005cU),32);
    bufp->fullIData(oldp+82,(4U),32);
    bufp->fullIData(oldp+83,(0x00000010U),32);
    bufp->fullIData(oldp+84,(0x00000080U),32);
    bufp->fullIData(oldp+85,(8U),32);
    bufp->fullIData(oldp+86,(1U),32);
    bufp->fullIData(oldp+87,(2U),32);
    bufp->fullIData(oldp+88,(3U),32);
    bufp->fullIData(oldp+89,(5U),32);
    bufp->fullIData(oldp+90,(6U),32);
    bufp->fullIData(oldp+91,(7U),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[0]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[1]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[2]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[3]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[4]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[5]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[6]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_DEPTHS[7]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[0]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[1]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[2]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[3]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[4]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[5]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[6]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__noc_params_pkg.__PVT__VC_WEIGHTS[7]),32);
    bufp->fullIData(oldp+108,(0x00000200U),32);
    bufp->fullIData(oldp+109,(0x00000030U),32);
    bufp->fullIData(oldp+110,(0x00000020U),32);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_full_0_sub_0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_full_0\n"); );
    // Body
    Vtb_tl_end_to_end___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tl_end_to_end___024root*>(voidSelf);
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_tl_end_to_end___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_tl_end_to_end___024root__trace_full_0_sub_0(Vtb_tl_end_to_end___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tl_end_to_end___024root__trace_full_0_sub_0\n"); );
    Vtb_tl_end_to_end__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_valid));
    bufp->fullWData(oldp+1,(vlSelfRef.tb_tl_end_to_end__DOT__c_noc_out_flit),128);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_ready));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__state),2);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg_valid));
    bufp->fullIData(oldp+8,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__total_beats),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__beat_index),32);
    bufp->fullQData(oldp+10,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk1__DOT__hdr),36);
    bufp->fullBit(oldp+12,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_pulse));
    bufp->fullQData(oldp+13,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_hdr_reg),36);
    bufp->fullWData(oldp+15,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_payload_reg),92);
    bufp->fullBit(oldp+18,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__a_has_reg));
    bufp->fullBit(oldp+19,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__present_a));
    bufp->fullBit(oldp+20,(vlSelfRef.tb_tl_end_to_end__DOT__a_valid));
    bufp->fullWData(oldp+21,(vlSelfRef.tb_tl_end_to_end__DOT__a_bits),211);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_tl_end_to_end__DOT__cycle),32);
    bufp->fullBit(oldp+29,(vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_valid));
    bufp->fullWData(oldp+30,(vlSelfRef.tb_tl_end_to_end__DOT__m_noc_out_flit),128);
    bufp->fullBit(oldp+34,(vlSelfRef.tb_tl_end_to_end__DOT__d_valid));
    bufp->fullWData(oldp+35,(vlSelfRef.tb_tl_end_to_end__DOT__d_bits),156);
    bufp->fullBit(oldp+40,(vlSelfRef.tb_tl_end_to_end__DOT__m_a_valid));
    bufp->fullWData(oldp+41,(vlSelfRef.tb_tl_end_to_end__DOT__m_a_bits),211);
    bufp->fullBit(oldp+48,(vlSelfRef.tb_tl_end_to_end__DOT__m_d_valid));
    bufp->fullWData(oldp+49,(vlSelfRef.tb_tl_end_to_end__DOT__m_d_bits),156);
    bufp->fullWData(oldp+54,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__a_reg),211);
    bufp->fullQData(oldp+61,(vlSelfRef.tb_tl_end_to_end__DOT__client__DOT__unnamedblk2__DOT__hdr),36);
    bufp->fullWData(oldp+63,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__payload),92);
    bufp->fullQData(oldp+66,(vlSelfRef.tb_tl_end_to_end__DOT__manager__DOT__unnamedblk1__DOT__ohdr),36);
    bufp->fullBit(oldp+68,(vlSelfRef.clk));
    bufp->fullBit(oldp+69,(vlSelfRef.rst_n));
}
