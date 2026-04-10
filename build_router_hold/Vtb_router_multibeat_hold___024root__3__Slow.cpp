// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_router_multibeat_hold.h for the primary calling header

#include "Vtb_router_multibeat_hold__pch.h"

VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___stl_sequent__TOP__3(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___stl_sequent__TOP__3\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0;
    IData/*31:0*/ tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0;
    IData/*31:0*/ tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0;
    IData/*31:0*/ tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0;
    IData/*31:0*/ tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0;
    // Body
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0x7fU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 7U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000080U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x10U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0ULL == (0x00000000e0000000ULL 
                                   & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000010U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[64U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[65U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[66U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[67U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfeU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec) 
                            | (~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (1U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x11U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000020000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000011U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[68U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[69U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[70U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[71U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfdU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 1U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (2U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x12U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000040000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000012U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[72U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[73U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[74U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[75U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfbU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 2U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (4U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x13U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000060000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000013U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[76U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[77U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[78U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[79U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xf7U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 3U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (8U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x14U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000080000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000014U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[80U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[81U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[82U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[83U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xefU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 4U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000010U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x15U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000a0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000015U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[84U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[85U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[86U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[87U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xdfU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 5U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000020U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x16U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000c0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000016U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[88U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[89U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[90U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[91U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xbfU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 6U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000040U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x17U)))) {
        if ((4U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000e0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000017U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[8U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[9U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[10U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[11U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[92U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[93U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[94U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[95U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0x7fU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 7U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000080U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x18U)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0ULL == (0x00000000e0000000ULL 
                                   & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000018U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[96U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[97U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[98U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[99U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfeU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec) 
                            | (~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (1U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x19U)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000020000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000019U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[100U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[101U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[102U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[103U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfdU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 1U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (2U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x1aU)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000040000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x0000001aU))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[104U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[105U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[106U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[107U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfbU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 2U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (4U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x1bU)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000060000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x0000001bU))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[108U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[109U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[110U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[111U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xf7U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 3U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (8U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x1cU)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000080000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x0000001cU))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[112U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[113U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[114U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[115U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xefU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 4U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000010U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x1dU)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000a0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x0000001dU))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[116U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[117U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[118U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[119U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xdfU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 5U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000020U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x1eU)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000c0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x0000001eU))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[120U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[121U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[122U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[123U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xbfU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 6U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000040U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x1fU)))) {
        if ((8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000e0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x0000001fU))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[12U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[13U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[14U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[15U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[124U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[125U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[126U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[127U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0x7fU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 7U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000080U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x20U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0ULL == (0x00000000e0000000ULL 
                                   & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000020U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[128U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[129U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[130U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[131U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfeU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec) 
                            | (~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (1U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x21U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000020000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000021U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[132U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[133U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[134U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[135U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfdU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 1U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (2U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x22U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000040000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000022U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[136U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[137U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[138U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[139U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xfbU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 2U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (4U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x23U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000060000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000023U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[140U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[141U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[142U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[143U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xf7U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                            | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                               << 3U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (8U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x24U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x0000000080000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000024U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[144U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[145U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[146U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[147U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xefU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 4U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000010U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x25U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000a0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000025U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[148U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[149U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[150U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[151U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xdfU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 5U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000020U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x26U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000c0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000026U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[152U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[153U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[154U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[155U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0xbfU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 6U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000040U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] = 0U;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg = 0ULL;
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port = 0xffffffffU;
    if ((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty 
                       >> 0x27U)))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid))) {
            vlSelfRef.__Vfunc_extract_hdr__65__flit[0U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[1U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[2U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
            vlSelfRef.__Vfunc_extract_hdr__65__flit[3U] 
                = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            vlSelfRef.__Vfunc_extract_hdr__65__hdr 
                = (0x0000000fffffffffULL & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__65__flit[2U])) 
                                               >> 0x0000001cU)));
            vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout 
                = vlSelfRef.__Vfunc_extract_hdr__65__hdr;
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg 
                = vlSelfRef.__Vfunc_extract_hdr__65__Vfuncout;
            if ((IData)(((0x00000000e0000000ULL == 
                          (0x00000000e0000000ULL & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg)) 
                         & (~ (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full 
                               >> 0x00000027U))))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[16U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[17U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[18U];
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
                    = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit[19U];
            }
        }
    } else {
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate = 1U;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[156U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[157U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[158U];
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout[159U];
    }
    if (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate) {
        vlSelfRef.__Vfunc_extract_hdr__66__flit[0U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[0U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[1U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[1U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[2U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[2U];
        vlSelfRef.__Vfunc_extract_hdr__66__flit[3U] 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit[3U];
        vlSelfRef.__Vfunc_extract_hdr__66__hdr = (0x0000000fffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[3U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.__Vfunc_extract_hdr__66__flit[2U])) 
                                                        >> 0x0000001cU)));
        vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout 
            = vlSelfRef.__Vfunc_extract_hdr__66__hdr;
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c 
            = vlSelfRef.__Vfunc_extract_hdr__66__Vfuncout;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
            = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c;
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node 
            = (0x0000000fU & (IData)((vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr 
                                      >> 0x00000020U)));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x 
            = VL_MODDIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y 
            = VL_DIVS_III(32, (IData)(vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node), (IData)(4U));
        vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout 
            = (((0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x) 
                & (0U == vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y))
                ? 4U : ((0U != vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                         ? (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x)
                             ? 2U : 3U) : (VL_LTS_III(32, 0U, vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y)
                                            ? 1U : 0U)));
        vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port 
            = vlSelfRef.__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout;
        if (((4U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port) 
             & (1U == vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos))) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec 
                = ((0x7fU & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec)) 
                                     | ((~ (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c)) 
                                        << 7U))));
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec 
                = (0x00000080U | (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec));
        }
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__grant_comb = 0U;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 8U, tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k)) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__rr_ptr) 
                   + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
            if (VL_LTES_III(32, 8U, vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                    = (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                       - (IData)(8U));
            }
            if ((1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__req_vec) 
                       >> (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__grant_comb 
                    = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__grant_comb) 
                       | (0x00ffU & ((IData)(1U) << 
                                     (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int))));
                goto __Vlabel0;
            }
            tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k 
                = ((IData)(1U) + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
        }
        __Vlabel0: ;
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__grant_comb = 0U;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 8U, tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k)) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__rr_ptr) 
                   + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
            if (VL_LTES_III(32, 8U, vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                    = (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                       - (IData)(8U));
            }
            if ((1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__req_vec) 
                       >> (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__grant_comb 
                    = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__grant_comb) 
                       | (0x00ffU & ((IData)(1U) << 
                                     (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int))));
                goto __Vlabel1;
            }
            tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k 
                = ((IData)(1U) + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
        }
        __Vlabel1: ;
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__grant_comb = 0U;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 8U, tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k)) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__rr_ptr) 
                   + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
            if (VL_LTES_III(32, 8U, vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                    = (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                       - (IData)(8U));
            }
            if ((1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__req_vec) 
                       >> (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__grant_comb 
                    = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__grant_comb) 
                       | (0x00ffU & ((IData)(1U) << 
                                     (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int))));
                goto __Vlabel2;
            }
            tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k 
                = ((IData)(1U) + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
        }
        __Vlabel2: ;
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__grant_comb = 0U;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 8U, tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k)) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__rr_ptr) 
                   + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
            if (VL_LTES_III(32, 8U, vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                    = (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                       - (IData)(8U));
            }
            if ((1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__req_vec) 
                       >> (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__grant_comb 
                    = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__grant_comb) 
                       | (0x00ffU & ((IData)(1U) << 
                                     (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int))));
                goto __Vlabel3;
            }
            tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k 
                = ((IData)(1U) + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
        }
        __Vlabel3: ;
    }
    vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__grant_comb = 0U;
    tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k = 0U;
    {
        while (VL_GTS_III(32, 8U, tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k)) {
            vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__rr_ptr) 
                   + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
            if (VL_LTES_III(32, 8U, vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                    = (vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int 
                       - (IData)(8U));
            }
            if ((1U & ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec) 
                       >> (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int)))) {
                vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__grant_comb 
                    = ((IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__grant_comb) 
                       | (0x00ffU & ((IData)(1U) << 
                                     (7U & vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int))));
                goto __Vlabel4;
            }
            tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k 
                = ((IData)(1U) + tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__k);
        }
        __Vlabel4: ;
    }
}

VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___stl_sequent__TOP__0(Vtb_router_multibeat_hold___024root* vlSelf);
VL_ATTR_COLD void Vtb_router_multibeat_hold___024root____Vm_traceActivitySetAll(Vtb_router_multibeat_hold___024root* vlSelf);
VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___stl_sequent__TOP__1(Vtb_router_multibeat_hold___024root* vlSelf);
VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___stl_sequent__TOP__2(Vtb_router_multibeat_hold___024root* vlSelf);

VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___eval_stl(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___eval_stl\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_router_multibeat_hold___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_router_multibeat_hold___024root____Vm_traceActivitySetAll(vlSelf);
        Vtb_router_multibeat_hold___024root___stl_sequent__TOP__1(vlSelf);
        Vtb_router_multibeat_hold___024root___stl_sequent__TOP__2(vlSelf);
        Vtb_router_multibeat_hold___024root___stl_sequent__TOP__3(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___eval_triggers_vec__stl(Vtb_router_multibeat_hold___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_router_multibeat_hold___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vtb_router_multibeat_hold___024root___eval_phase__stl(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___eval_phase__stl\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_router_multibeat_hold___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_router_multibeat_hold___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_router_multibeat_hold___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_router_multibeat_hold___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_router_multibeat_hold___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_router_multibeat_hold___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_router_multibeat_hold___024root____Vm_traceActivitySetAll(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root____Vm_traceActivitySetAll\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtb_router_multibeat_hold___024root___ctor_var_reset(Vtb_router_multibeat_hold___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root___ctor_var_reset\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->tb_router_multibeat_hold__DOT__in_valid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11359889444615356904ull);
    VL_SCOPED_RAND_RESET_W(640, vlSelf->tb_router_multibeat_hold__DOT__in_flit, __VscopeHash, 322085150833773731ull);
    vlSelf->tb_router_multibeat_hold__DOT__out_ready = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6681782812810494881ull);
    vlSelf->tb_router_multibeat_hold__DOT__cycle = 0;
    vlSelf->tb_router_multibeat_hold__DOT__hdr = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16849111359743625433ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_he3e12c26__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hb23073c6__0 = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h0e6bbddf__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h3a4972a0__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h39c5bd67__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hc4e86825__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hf924bb40__0 = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hefd1f2b4__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hc8ae3ad1__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h3c4873bc__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_he4eeb775__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hef968210__0 = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h4b2015cb__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hbf148660__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h85284c16__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h33266093__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hfcb635f7__0 = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hffee7e95__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h313a7dec__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hd76b91b7__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h44fffa75__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h728332b5__0 = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_h298f90ab__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hbce0f0a3__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hbb3438a7__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT____Vlvbound_hbae1d3de__0);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__in_ready = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14611624172229269911ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7179514162202060939ull);
    VL_SCOPED_RAND_RESET_W(640, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit, __VscopeHash, 4392022415571017066ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__fifo_push = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12627147788220279392ull);
    VL_SCOPED_RAND_RESET_W(5120, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__fifo_din, __VscopeHash, 2181262892712681699ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11674668932214386111ull);
    VL_SCOPED_RAND_RESET_W(5120, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__fifo_dout, __VscopeHash, 11939833453373742429ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15805003710449266865ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__fifo_full = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6634602788871462622ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__out_reg_valid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8360109472307834577ull);
    VL_SCOPED_RAND_RESET_W(640, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__out_reg_flit, __VscopeHash, 10229477296860459054ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__req_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14327204754534337265ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__hold_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8788069414308139110ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__grant_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16058814153692188833ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7229233440549473323ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__best_qos = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__selected_vc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11015565483069679797ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__candidate_flit_out, __VscopeHash, 8942957419722804103ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__candidate_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14543512138707345822ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk12__DOT__unnamedblk13__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk18__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__req_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17568395156825853598ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__hold_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8472146901950759502ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__grant_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10245705216873797572ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1617546960910966446ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__best_qos = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__selected_vc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14095347839959026693ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__candidate_flit_out, __VscopeHash, 13945375737063419489ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__candidate_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5243814485637888735ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk12__DOT__unnamedblk13__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk18__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__req_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14528287638091986477ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__hold_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2583599559103543598ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__grant_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14796471590980948447ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14753345103594781416ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__best_qos = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__selected_vc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7846882992633039885ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__candidate_flit_out, __VscopeHash, 12059259291791245446ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__candidate_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12784582684109091885ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk12__DOT__unnamedblk13__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk18__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__req_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2643521509899793748ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__hold_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 279219648417122553ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__grant_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12919890778104849447ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 416245932483858684ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__best_qos = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__selected_vc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18355194637067306592ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__candidate_flit_out, __VscopeHash, 6173105426122065973ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__candidate_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10054876962134739948ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk12__DOT__unnamedblk13__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk18__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9332517576325128739ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15295498574219779760ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__grant_vec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10054829049828052860ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9732880756353235687ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__selected_vc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14599443760173489308ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__candidate_flit_out, __VscopeHash, 3559665568763661994ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__candidate_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5599658378732287780ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk12__DOT__unnamedblk13__DOT__sip = 0;
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk18__DOT__sip = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 11925715462528295911ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13198962700938615599ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11407069120848500914ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 642571778465535283ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17040462174781288282ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14457985176703865942ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17048938015123255522ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 15091928466360029492ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15674109572917677002ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8822327891052475838ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8659245527217652385ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13983466927576043811ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6518393643348081272ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18071129856986466925ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 17954430134042275744ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12107468546777500628ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17531648116838410739ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14819582808481553252ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1395287987812253369ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10548636207018406844ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10613256558486669372ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 7396471210575967134ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8296386296630721354ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11588190318739113801ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 107522489885964356ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12632502393858799337ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14542816931124448615ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17442612420097159829ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 3135273070786232791ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7370091244450057198ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4347262606851609373ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7779641855770401606ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9729756566918779953ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4550128084524344663ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10033511966811465815ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 14879286988618493177ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4927929969705639067ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16714871059617221155ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15009190014940345898ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17600164360109323949ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15293304675808710153ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6046928777354694705ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound_h6746f861__0);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 17019766009121546772ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15982052128518283352ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17377615902383501371ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3521436897049648858ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1916393060346951158ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16811023003573563493ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15744592543435981468ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 16371074800673230594ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9401290987858229247ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15575010978028895825ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4463781659162273287ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13561229993656047326ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 896460734606942574ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5504887712728436615ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 18371171938194022881ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7113726655887626377ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3735174095214121678ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9682858911277142581ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7134880397434730512ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5118562032692817058ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 247090486675136511ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 7950820828820729727ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3969765599267589757ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1709040088295132049ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12728175699079504043ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9115613378562450145ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5623198744179181346ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12206168569441873035ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 10223429886786347906ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4988045425081306100ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13078100030283683042ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5672533369250410612ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16633664579717482021ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13725467244947840134ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3996446855128135187ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 17268427226524771983ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10185429731694131788ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14610564520073314361ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15397247606015494776ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3698206273438649226ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7288571045400155269ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10094553671786290540ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 16597298570263243030ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3921420893174467661ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17357269837840245620ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6228395833530228165ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8871419196848067600ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15636287281248351694ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17852762762798139527ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 16648520816313967825ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2463110211535919046ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2879136936209447501ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3476688169962320613ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17201722748459464465ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10897860195810755525ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15707164702057357986ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound_h6746f861__0);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 446023715930314917ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5647036823007910054ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3849076230201858270ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16093414899839373168ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6068488515032728180ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8001195962334973079ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7740750006479637556ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 4200049908245115412ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3884874605594920950ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2052099753533497800ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 733125606494661102ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867869641611810442ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17234069465208859262ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17347325054809990879ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 14988621656265213703ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5302564536027232529ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8464261521051239757ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10714625080430628059ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17100254560230517512ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10437937328904875672ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11659859971906357781ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 5756171181694278652ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10380445294126024707ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12893630137784881311ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13907674078929615168ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16432256112961625986ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6727537684709465004ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 446462184601114654ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 14299648597586191668ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10297571775719838057ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 308260183506143274ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10276579339274119563ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11099102387550543751ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17474734668945148537ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2395505089681799495ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 12633493436503405906ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12573098736899021319ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6414021416032788343ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1503048733872386791ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4504743454142217003ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2045970193298012240ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12326203948702278682ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 8681265262225969753ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4629501954526481804ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4654798716375520088ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9373525515376485118ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10262354228405115197ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17532456101941064437ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5176173305862340186ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 8801353031760940646ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3062990037232767168ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13574740184718953727ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12506039409101233219ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2663956101274830005ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10775672995377643143ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3697495967656652321ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound_h6746f861__0);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 6920972444025802172ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14138748132007942174ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7371345125263960129ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6727159803249795732ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15454927743010868291ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7421216805908266499ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13007404772445393392ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 8462711663534395779ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4427113984642961848ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11474427757973147475ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15378287132915943813ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6794522323839824520ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16062314588990909524ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3815389752939154585ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 718498186906469104ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15390007227578996488ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15351551429310297108ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16086038325244371604ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5449697164631024275ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16332593601683122909ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13661204497238719491ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 408273955658550932ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15464857468086176450ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13728782601212658255ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3948333589506318199ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17371710890365116727ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14517377408898930765ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17807469758231447339ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 5699337393646822698ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14053719985911260839ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9657423942390522744ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2804875380189479536ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6769095418915673707ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3908692366557541097ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11769349756847001827ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 11563965763990103418ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8861699259264801646ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6872169203867698992ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13005152334772588726ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4808009001108694121ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4502105854248841248ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11477902850459031048ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 11980345928370650971ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8095670784210329081ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1746181685222056646ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16832845643141427413ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8563702418839470679ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10878753908387798725ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1390227476827376984ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 4951699478533264125ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10048502920793788340ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11848235355701919866ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9914137413770347916ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1566577079847296868ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14750152811561668740ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9930010893098568119ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound_h6746f861__0);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 8913892518357965863ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14462124263469382767ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11891144048249977183ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14235070980904440224ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5856195821839219302ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2595560533853111715ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 799377041118078550ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 9809421601591982810ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10101931529852390341ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1506474337086753685ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4776369438661073537ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2068990691619807692ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17605533045913803391ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1299977386847439264ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 10587037998993428815ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12380827760426489993ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7179328695155445541ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12495449576818819615ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9815461776299455817ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1463039794751147304ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5906184530765564160ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 3952741733684997269ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10646614381150929673ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15538328997917008443ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13474219943195733251ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3926392041467444519ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3200265780215897818ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15385607845663026226ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 16655757793121442457ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8738570565812693949ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14341432433030481885ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7380085292727727384ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5852239862775244036ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11128269602270589426ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12544026639018516723ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 2113466738064212690ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4525014662532886088ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8772657006284348872ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14495423216899015786ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8488969692363024679ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6236093879868461540ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15331489826657131971ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 5644435319175910548ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2691237983880846396ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15040807420635326335ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15941729098085690570ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11227890900503691065ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8694072636729472654ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1085697080106924773ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 15561791168492208773ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1650411607771854123ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10351503795409829371ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3913786425733016541ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729290970120402502ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16367886256670625758ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5504137951923457126ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT____Vlvbound_h6746f861__0);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 7534402697527502310ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11202386766201726901ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12560719901645043038ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7728215338303503610ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10933668846403375943ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15095523661489497558ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15482487654875876560ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[__Vi0], __VscopeHash, 13423200753210496396ull);
    }
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16704557340836075689ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12797384289368033189ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1027592202689929101ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7286588003144590229ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7167801475684472226ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10246608276878590767ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__rr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5276024622301240180ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__grant_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6904615393485173706ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__rr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17299489133197863245ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__grant_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7805022664797111560ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__rr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17952829597802368399ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__grant_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11874711724145929644ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__rr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4720699777267842994ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__grant_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15577182285133398284ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__rr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18420809978415254668ull);
    vlSelf->tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__grant_comb = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13266906440456598481ull);
    vlSelf->__Vfunc_extract_hdr__2__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__2__flit);
    vlSelf->__Vfunc_extract_hdr__2__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__3__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__3__flit);
    vlSelf->__Vfunc_extract_hdr__3__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__4__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__4__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__4__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__4__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__4__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__5__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__5__flit);
    vlSelf->__Vfunc_extract_hdr__5__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__6__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__6__flit);
    vlSelf->__Vfunc_extract_hdr__6__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__7__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__7__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__7__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__7__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__7__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__8__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__8__flit);
    vlSelf->__Vfunc_extract_hdr__8__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__9__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__9__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__9__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__9__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__9__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__9__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__10__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__10__flit);
    vlSelf->__Vfunc_extract_hdr__10__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__11__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__11__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__11__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__11__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__11__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__11__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__17__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__17__flit);
    vlSelf->__Vfunc_extract_hdr__17__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__18__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__18__flit);
    vlSelf->__Vfunc_extract_hdr__18__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__19__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__19__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__19__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__19__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__19__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__20__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__20__flit);
    vlSelf->__Vfunc_extract_hdr__20__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__21__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__21__flit);
    vlSelf->__Vfunc_extract_hdr__21__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__22__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__22__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__22__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__22__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__22__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__23__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__23__flit);
    vlSelf->__Vfunc_extract_hdr__23__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__24__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__24__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__24__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__24__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__24__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__24__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__25__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__25__flit);
    vlSelf->__Vfunc_extract_hdr__25__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__26__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__26__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__26__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__26__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__26__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__26__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__32__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__32__flit);
    vlSelf->__Vfunc_extract_hdr__32__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__33__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__33__flit);
    vlSelf->__Vfunc_extract_hdr__33__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__34__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__34__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__34__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__34__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__34__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__35__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__35__flit);
    vlSelf->__Vfunc_extract_hdr__35__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__36__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__36__flit);
    vlSelf->__Vfunc_extract_hdr__36__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__37__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__37__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__37__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__37__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__37__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__38__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__38__flit);
    vlSelf->__Vfunc_extract_hdr__38__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__39__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__39__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__39__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__39__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__39__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__39__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__40__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__40__flit);
    vlSelf->__Vfunc_extract_hdr__40__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__41__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__41__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__41__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__41__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__41__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__41__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__47__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__47__flit);
    vlSelf->__Vfunc_extract_hdr__47__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__48__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__48__flit);
    vlSelf->__Vfunc_extract_hdr__48__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__49__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__49__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__49__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__49__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__49__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__50__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__50__flit);
    vlSelf->__Vfunc_extract_hdr__50__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__51__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__51__flit);
    vlSelf->__Vfunc_extract_hdr__51__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__52__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__52__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__52__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__52__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__52__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__53__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__53__flit);
    vlSelf->__Vfunc_extract_hdr__53__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__54__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__54__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__54__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__54__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__54__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__54__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__55__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__55__flit);
    vlSelf->__Vfunc_extract_hdr__55__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__56__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__56__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__56__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__56__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__56__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__56__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__62__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__62__flit);
    vlSelf->__Vfunc_extract_hdr__62__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__63__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__63__flit);
    vlSelf->__Vfunc_extract_hdr__63__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__64__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__64__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__64__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__64__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__64__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__65__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__65__flit);
    vlSelf->__Vfunc_extract_hdr__65__hdr = 0;
    vlSelf->__Vfunc_extract_hdr__66__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__66__flit);
    vlSelf->__Vfunc_extract_hdr__66__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__67__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__68__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__68__flit);
    vlSelf->__Vfunc_extract_hdr__68__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__69__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__69__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__69__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__69__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__69__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__69__dst_y = 0;
    vlSelf->__Vfunc_extract_hdr__70__Vfuncout = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vfunc_extract_hdr__70__flit);
    vlSelf->__Vfunc_extract_hdr__70__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__71__Vfuncout = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__71__hdr = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__71__mesh_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__71__dst_node = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__71__dst_x = 0;
    vlSelf->__Vfunc_tb_router_multibeat_hold__DOT__dut__DOT__route_port__71__dst_y = 0;
    vlSelf->__Vdly__tb_router_multibeat_hold__DOT__cycle = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
