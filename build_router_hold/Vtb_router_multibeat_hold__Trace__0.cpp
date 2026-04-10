// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_router_multibeat_hold__Syms.h"


void Vtb_router_multibeat_hold___024root__trace_chg_0_sub_0(Vtb_router_multibeat_hold___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_router_multibeat_hold___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root__trace_chg_0\n"); );
    // Body
    Vtb_router_multibeat_hold___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_router_multibeat_hold___024root*>(voidSelf);
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_router_multibeat_hold___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_router_multibeat_hold___024root__trace_chg_0_sub_0(Vtb_router_multibeat_hold___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root__trace_chg_0_sub_0\n"); );
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_router_multibeat_hold__DOT__out_ready),5);
        bufp->chgSData(oldp+1,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[0]),16);
        bufp->chgSData(oldp+2,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[1]),16);
        bufp->chgSData(oldp+3,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[2]),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[3]),16);
        bufp->chgSData(oldp+5,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[4]),16);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[5]),16);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[6]),16);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__age_vec[7]),16);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[0]),16);
        bufp->chgSData(oldp+10,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[1]),16);
        bufp->chgSData(oldp+11,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[2]),16);
        bufp->chgSData(oldp+12,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[3]),16);
        bufp->chgSData(oldp+13,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[4]),16);
        bufp->chgSData(oldp+14,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[5]),16);
        bufp->chgSData(oldp+15,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[6]),16);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__age_vec[7]),16);
        bufp->chgSData(oldp+17,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[0]),16);
        bufp->chgSData(oldp+18,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[1]),16);
        bufp->chgSData(oldp+19,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[2]),16);
        bufp->chgSData(oldp+20,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[3]),16);
        bufp->chgSData(oldp+21,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[4]),16);
        bufp->chgSData(oldp+22,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[5]),16);
        bufp->chgSData(oldp+23,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[6]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__age_vec[7]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[0]),16);
        bufp->chgSData(oldp+26,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[1]),16);
        bufp->chgSData(oldp+27,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[2]),16);
        bufp->chgSData(oldp+28,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[3]),16);
        bufp->chgSData(oldp+29,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[4]),16);
        bufp->chgSData(oldp+30,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[5]),16);
        bufp->chgSData(oldp+31,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[6]),16);
        bufp->chgSData(oldp+32,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__age_vec[7]),16);
        bufp->chgSData(oldp+33,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[0]),16);
        bufp->chgSData(oldp+34,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[1]),16);
        bufp->chgSData(oldp+35,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[2]),16);
        bufp->chgSData(oldp+36,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[3]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[4]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[5]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[6]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__age_vec[7]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+41,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__out_reg_valid),5);
        bufp->chgWData(oldp+42,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__out_reg_flit),640);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_valid),5);
        bufp->chgWData(oldp+63,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_reg_flit),640);
        bufp->chgQData(oldp+83,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push),40);
        bufp->chgQData(oldp+85,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop),40);
        bufp->chgQData(oldp+87,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_empty),40);
        bufp->chgQData(oldp+89,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_full),40);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__req_vec),8);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__hold_vec),8);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__grant_vec),8);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__best_qos),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__selected_vc),32);
        bufp->chgWData(oldp+96,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__candidate_flit_out),128);
        bufp->chgBit(oldp+100,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__candidate_valid_out));
        bufp->chgCData(oldp+101,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__rr_ptr),3);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__grant_comb),8);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__arb_i__DOT__unnamedblk3__DOT__next_ptr_int),32);
        bufp->chgQData(oldp+105,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk12__DOT__h),36);
        bufp->chgQData(oldp+107,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk12__DOT__hr),36);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk12__DOT__dest_port),32);
        bufp->chgQData(oldp+110,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__h),36);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__dest_port),32);
        bufp->chgQData(oldp+113,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__unnamedblk20__DOT__hr),36);
        bufp->chgQData(oldp+115,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__hdr_r),36);
        bufp->chgCData(oldp+117,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__want_vc),3);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__has_candidate));
        bufp->chgWData(oldp+119,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__candidate_flit),128);
        bufp->chgQData(oldp+123,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_c),36);
        bufp->chgQData(oldp+125,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_reg),36);
        bufp->chgIData(oldp+127,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dest_port),32);
        bufp->chgBit(oldp+128,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate));
        bufp->chgWData(oldp+129,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit),128);
        bufp->chgQData(oldp+133,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c),36);
        bufp->chgQData(oldp+135,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg),36);
        bufp->chgIData(oldp+137,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__0__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port),32);
        bufp->chgCData(oldp+138,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__req_vec),8);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__hold_vec),8);
        bufp->chgCData(oldp+140,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__grant_vec),8);
        bufp->chgIData(oldp+141,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__best_qos),32);
        bufp->chgIData(oldp+142,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__selected_vc),32);
        bufp->chgWData(oldp+143,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__candidate_flit_out),128);
        bufp->chgBit(oldp+147,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__candidate_valid_out));
        bufp->chgCData(oldp+148,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__rr_ptr),3);
        bufp->chgCData(oldp+149,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__grant_comb),8);
        bufp->chgIData(oldp+150,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int),32);
        bufp->chgIData(oldp+151,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__arb_i__DOT__unnamedblk3__DOT__next_ptr_int),32);
        bufp->chgQData(oldp+152,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk12__DOT__h),36);
        bufp->chgQData(oldp+154,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk12__DOT__hr),36);
        bufp->chgIData(oldp+156,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk12__DOT__dest_port),32);
        bufp->chgQData(oldp+157,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__h),36);
        bufp->chgIData(oldp+159,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__dest_port),32);
        bufp->chgQData(oldp+160,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__unnamedblk20__DOT__hr),36);
        bufp->chgQData(oldp+162,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__hdr_r),36);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__want_vc),3);
        bufp->chgBit(oldp+165,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__has_candidate));
        bufp->chgWData(oldp+166,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__candidate_flit),128);
        bufp->chgQData(oldp+170,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_c),36);
        bufp->chgQData(oldp+172,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_reg),36);
        bufp->chgIData(oldp+174,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dest_port),32);
        bufp->chgBit(oldp+175,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate));
        bufp->chgWData(oldp+176,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit),128);
        bufp->chgQData(oldp+180,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c),36);
        bufp->chgQData(oldp+182,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg),36);
        bufp->chgIData(oldp+184,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__1__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port),32);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__req_vec),8);
        bufp->chgCData(oldp+186,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__hold_vec),8);
        bufp->chgCData(oldp+187,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__grant_vec),8);
        bufp->chgIData(oldp+188,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__best_qos),32);
        bufp->chgIData(oldp+189,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__selected_vc),32);
        bufp->chgWData(oldp+190,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__candidate_flit_out),128);
        bufp->chgBit(oldp+194,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__candidate_valid_out));
        bufp->chgCData(oldp+195,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__rr_ptr),3);
        bufp->chgCData(oldp+196,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__grant_comb),8);
        bufp->chgIData(oldp+197,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int),32);
        bufp->chgIData(oldp+198,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__arb_i__DOT__unnamedblk3__DOT__next_ptr_int),32);
        bufp->chgQData(oldp+199,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk12__DOT__h),36);
        bufp->chgQData(oldp+201,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk12__DOT__hr),36);
        bufp->chgIData(oldp+203,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk12__DOT__dest_port),32);
        bufp->chgQData(oldp+204,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__h),36);
        bufp->chgIData(oldp+206,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__dest_port),32);
        bufp->chgQData(oldp+207,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__unnamedblk20__DOT__hr),36);
        bufp->chgQData(oldp+209,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__hdr_r),36);
        bufp->chgCData(oldp+211,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__want_vc),3);
        bufp->chgBit(oldp+212,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__has_candidate));
        bufp->chgWData(oldp+213,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__candidate_flit),128);
        bufp->chgQData(oldp+217,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_c),36);
        bufp->chgQData(oldp+219,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_reg),36);
        bufp->chgIData(oldp+221,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dest_port),32);
        bufp->chgBit(oldp+222,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate));
        bufp->chgWData(oldp+223,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit),128);
        bufp->chgQData(oldp+227,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c),36);
        bufp->chgQData(oldp+229,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg),36);
        bufp->chgIData(oldp+231,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__2__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port),32);
        bufp->chgCData(oldp+232,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__req_vec),8);
        bufp->chgCData(oldp+233,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__hold_vec),8);
        bufp->chgCData(oldp+234,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__grant_vec),8);
        bufp->chgIData(oldp+235,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__best_qos),32);
        bufp->chgIData(oldp+236,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__selected_vc),32);
        bufp->chgWData(oldp+237,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__candidate_flit_out),128);
        bufp->chgBit(oldp+241,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__candidate_valid_out));
        bufp->chgCData(oldp+242,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__rr_ptr),3);
        bufp->chgCData(oldp+243,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__grant_comb),8);
        bufp->chgIData(oldp+244,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int),32);
        bufp->chgIData(oldp+245,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__arb_i__DOT__unnamedblk3__DOT__next_ptr_int),32);
        bufp->chgQData(oldp+246,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk12__DOT__h),36);
        bufp->chgQData(oldp+248,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk12__DOT__hr),36);
        bufp->chgIData(oldp+250,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk12__DOT__dest_port),32);
        bufp->chgQData(oldp+251,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__h),36);
        bufp->chgIData(oldp+253,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__dest_port),32);
        bufp->chgQData(oldp+254,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__unnamedblk20__DOT__hr),36);
        bufp->chgQData(oldp+256,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__hdr_r),36);
        bufp->chgCData(oldp+258,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__want_vc),3);
        bufp->chgBit(oldp+259,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__has_candidate));
        bufp->chgWData(oldp+260,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__candidate_flit),128);
        bufp->chgQData(oldp+264,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_c),36);
        bufp->chgQData(oldp+266,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_reg),36);
        bufp->chgIData(oldp+268,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dest_port),32);
        bufp->chgBit(oldp+269,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate));
        bufp->chgWData(oldp+270,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit),128);
        bufp->chgQData(oldp+274,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c),36);
        bufp->chgQData(oldp+276,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg),36);
        bufp->chgIData(oldp+278,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__3__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port),32);
        bufp->chgCData(oldp+279,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__req_vec),8);
        bufp->chgCData(oldp+280,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__hold_vec),8);
        bufp->chgCData(oldp+281,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__grant_vec),8);
        bufp->chgIData(oldp+282,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__best_qos),32);
        bufp->chgIData(oldp+283,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__selected_vc),32);
        bufp->chgWData(oldp+284,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__candidate_flit_out),128);
        bufp->chgBit(oldp+288,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__candidate_valid_out));
        bufp->chgCData(oldp+289,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__rr_ptr),3);
        bufp->chgCData(oldp+290,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__grant_comb),8);
        bufp->chgIData(oldp+291,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx_int),32);
        bufp->chgIData(oldp+292,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__arb_i__DOT__unnamedblk3__DOT__next_ptr_int),32);
        bufp->chgQData(oldp+293,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk12__DOT__h),36);
        bufp->chgQData(oldp+295,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk12__DOT__hr),36);
        bufp->chgIData(oldp+297,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk12__DOT__dest_port),32);
        bufp->chgQData(oldp+298,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__h),36);
        bufp->chgIData(oldp+300,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__dest_port),32);
        bufp->chgQData(oldp+301,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk18__DOT__unnamedblk19__DOT__unnamedblk20__DOT__hr),36);
        bufp->chgQData(oldp+303,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__hdr_r),36);
        bufp->chgCData(oldp+305,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk25__DOT__unnamedblk26__DOT__want_vc),3);
        bufp->chgBit(oldp+306,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__has_candidate));
        bufp->chgWData(oldp+307,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__candidate_flit),128);
        bufp->chgQData(oldp+311,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_c),36);
        bufp->chgQData(oldp+313,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__hdr_reg),36);
        bufp->chgIData(oldp+315,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dest_port),32);
        bufp->chgBit(oldp+316,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__has_candidate));
        bufp->chgWData(oldp+317,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__candidate_flit),128);
        bufp->chgQData(oldp+321,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_c),36);
        bufp->chgQData(oldp+323,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__hdr_reg),36);
        bufp->chgIData(oldp+325,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_OUTPUT_PORT__BRA__4__KET____DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__dest_port),32);
        bufp->chgCData(oldp+326,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+327,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+328,((1U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push))));
        __Vtemp_1[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[0U];
        __Vtemp_1[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[1U];
        __Vtemp_1[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[2U];
        __Vtemp_1[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[3U];
        bufp->chgWData(oldp+329,(__Vtemp_1),128);
        bufp->chgBit(oldp+333,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+334,((1U & (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop))));
        bufp->chgWData(oldp+335,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+339,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+340,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+344,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+348,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+352,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+356,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+357,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+358,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+359,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+360,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+361,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+362,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+363,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 1U)))));
        __Vtemp_2[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[4U];
        __Vtemp_2[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[5U];
        __Vtemp_2[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[6U];
        __Vtemp_2[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[7U];
        bufp->chgWData(oldp+364,(__Vtemp_2),128);
        bufp->chgBit(oldp+368,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+369,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 1U)))));
        bufp->chgWData(oldp+370,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+374,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+375,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+379,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+383,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+387,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+391,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+392,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+393,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+394,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+395,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+396,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+397,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+398,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 2U)))));
        __Vtemp_3[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[8U];
        __Vtemp_3[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[9U];
        __Vtemp_3[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[10U];
        __Vtemp_3[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[11U];
        bufp->chgWData(oldp+399,(__Vtemp_3),128);
        bufp->chgBit(oldp+403,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+404,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 2U)))));
        bufp->chgWData(oldp+405,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+409,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+410,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+414,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+418,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+422,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+426,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+427,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+428,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+429,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+430,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+431,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt),5);
        bufp->chgCData(oldp+432,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp),5);
        bufp->chgBit(oldp+433,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 3U)))));
        __Vtemp_4[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[12U];
        __Vtemp_4[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[13U];
        __Vtemp_4[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[14U];
        __Vtemp_4[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[15U];
        bufp->chgWData(oldp+434,(__Vtemp_4),128);
        bufp->chgBit(oldp+438,((0x10U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+439,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 3U)))));
        bufp->chgWData(oldp+440,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+444,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+445,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+449,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+453,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+457,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+461,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+465,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+469,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+473,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+477,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+481,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+485,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+489,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgWData(oldp+493,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[12]),128);
        bufp->chgWData(oldp+497,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[13]),128);
        bufp->chgWData(oldp+501,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[14]),128);
        bufp->chgWData(oldp+505,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[15]),128);
        bufp->chgCData(oldp+509,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+510,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+511,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+512,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+513,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+514,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+515,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+516,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 4U)))));
        __Vtemp_5[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[16U];
        __Vtemp_5[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[17U];
        __Vtemp_5[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[18U];
        __Vtemp_5[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[19U];
        bufp->chgWData(oldp+517,(__Vtemp_5),128);
        bufp->chgBit(oldp+521,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+522,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 4U)))));
        bufp->chgWData(oldp+523,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+527,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+528,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+532,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+536,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+540,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+544,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+548,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+552,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+556,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+560,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+561,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+562,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+563,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+564,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+565,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+566,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+567,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 5U)))));
        __Vtemp_6[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[20U];
        __Vtemp_6[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[21U];
        __Vtemp_6[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[22U];
        __Vtemp_6[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[23U];
        bufp->chgWData(oldp+568,(__Vtemp_6),128);
        bufp->chgBit(oldp+572,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+573,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 5U)))));
        bufp->chgWData(oldp+574,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+578,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+579,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+583,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+587,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+591,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+595,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+599,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+603,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+607,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+611,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+612,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+613,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+614,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+615,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+616,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+617,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+618,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 6U)))));
        __Vtemp_7[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[24U];
        __Vtemp_7[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[25U];
        __Vtemp_7[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[26U];
        __Vtemp_7[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[27U];
        bufp->chgWData(oldp+619,(__Vtemp_7),128);
        bufp->chgBit(oldp+623,((0x0cU == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+624,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 6U)))));
        if ((0x0bU >= (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr))) {
            __Vtemp_10[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][0U];
            __Vtemp_10[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][1U];
            __Vtemp_10[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][2U];
            __Vtemp_10[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][3U];
        } else {
            __Vtemp_10[0U] = 0U;
            __Vtemp_10[1U] = 0U;
            __Vtemp_10[2U] = 0U;
            __Vtemp_10[3U] = 0U;
        }
        bufp->chgWData(oldp+625,(__Vtemp_10),128);
        bufp->chgBit(oldp+629,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+630,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+634,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+638,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+642,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+646,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+650,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+654,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+658,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+662,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+666,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+670,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+674,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgCData(oldp+678,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+679,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+680,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+681,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+682,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+683,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+684,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+685,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 7U)))));
        __Vtemp_11[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[28U];
        __Vtemp_11[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[29U];
        __Vtemp_11[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[30U];
        __Vtemp_11[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[31U];
        bufp->chgWData(oldp+686,(__Vtemp_11),128);
        bufp->chgBit(oldp+690,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+691,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 7U)))));
        bufp->chgWData(oldp+692,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+696,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+697,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+701,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+705,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+709,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+713,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+717,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+721,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+725,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+729,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+730,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+731,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+732,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+733,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__0__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+734,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+735,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+736,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 8U)))));
        __Vtemp_12[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[32U];
        __Vtemp_12[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[33U];
        __Vtemp_12[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[34U];
        __Vtemp_12[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[35U];
        bufp->chgWData(oldp+737,(__Vtemp_12),128);
        bufp->chgBit(oldp+741,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 8U)))));
        bufp->chgWData(oldp+743,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+747,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+748,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+752,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+756,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+760,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+764,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+765,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+766,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+767,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+768,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+769,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+770,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 9U)))));
        __Vtemp_13[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[36U];
        __Vtemp_13[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[37U];
        __Vtemp_13[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[38U];
        __Vtemp_13[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[39U];
        bufp->chgWData(oldp+772,(__Vtemp_13),128);
        bufp->chgBit(oldp+776,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 9U)))));
        bufp->chgWData(oldp+778,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+782,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+783,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+787,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+791,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+795,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+799,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+800,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+801,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+802,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+803,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+804,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+805,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 0x0000000aU)))));
        __Vtemp_14[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[40U];
        __Vtemp_14[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[41U];
        __Vtemp_14[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[42U];
        __Vtemp_14[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[43U];
        bufp->chgWData(oldp+807,(__Vtemp_14),128);
        bufp->chgBit(oldp+811,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 0x0000000aU)))));
        bufp->chgWData(oldp+813,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+817,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+818,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+822,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+826,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+830,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+834,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+835,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+836,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+837,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+838,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+839,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt),5);
        bufp->chgCData(oldp+840,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp),5);
        bufp->chgBit(oldp+841,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 0x0000000bU)))));
        __Vtemp_15[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[44U];
        __Vtemp_15[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[45U];
        __Vtemp_15[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[46U];
        __Vtemp_15[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[47U];
        bufp->chgWData(oldp+842,(__Vtemp_15),128);
        bufp->chgBit(oldp+846,((0x10U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+847,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 0x0000000bU)))));
        bufp->chgWData(oldp+848,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+852,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+853,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+857,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+861,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+865,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+869,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+873,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+877,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+881,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+885,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+889,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+893,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+897,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgWData(oldp+901,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[12]),128);
        bufp->chgWData(oldp+905,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[13]),128);
        bufp->chgWData(oldp+909,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[14]),128);
        bufp->chgWData(oldp+913,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[15]),128);
        bufp->chgCData(oldp+917,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+918,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+919,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+920,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+921,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+922,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+923,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+924,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 0x0000000cU)))));
        __Vtemp_16[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[48U];
        __Vtemp_16[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[49U];
        __Vtemp_16[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[50U];
        __Vtemp_16[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[51U];
        bufp->chgWData(oldp+925,(__Vtemp_16),128);
        bufp->chgBit(oldp+929,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+930,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 0x0000000cU)))));
        bufp->chgWData(oldp+931,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+935,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+936,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+940,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+944,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+948,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+952,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+956,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+960,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+964,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+968,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+969,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+970,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+971,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+972,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+973,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+974,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+975,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                              >> 0x0000000dU)))));
        __Vtemp_17[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[52U];
        __Vtemp_17[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[53U];
        __Vtemp_17[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[54U];
        __Vtemp_17[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[55U];
        bufp->chgWData(oldp+976,(__Vtemp_17),128);
        bufp->chgBit(oldp+980,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                              >> 0x0000000dU)))));
        bufp->chgWData(oldp+982,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem
                                 [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+986,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+987,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+991,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+995,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+999,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1003,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1007,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1011,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1015,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1019,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1020,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1021,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1022,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1023,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1024,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1025,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1026,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000000eU)))));
        __Vtemp_18[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[56U];
        __Vtemp_18[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[57U];
        __Vtemp_18[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[58U];
        __Vtemp_18[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[59U];
        bufp->chgWData(oldp+1027,(__Vtemp_18),128);
        bufp->chgBit(oldp+1031,((0x0cU == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1032,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000000eU)))));
        if ((0x0bU >= (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr))) {
            __Vtemp_21[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][0U];
            __Vtemp_21[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][1U];
            __Vtemp_21[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][2U];
            __Vtemp_21[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][3U];
        } else {
            __Vtemp_21[0U] = 0U;
            __Vtemp_21[1U] = 0U;
            __Vtemp_21[2U] = 0U;
            __Vtemp_21[3U] = 0U;
        }
        bufp->chgWData(oldp+1033,(__Vtemp_21),128);
        bufp->chgBit(oldp+1037,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1038,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1042,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1046,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1050,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1054,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1058,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1062,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1066,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+1070,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+1074,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+1078,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+1082,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgCData(oldp+1086,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+1087,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+1088,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1089,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1090,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1091,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1092,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1093,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000000fU)))));
        __Vtemp_22[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[60U];
        __Vtemp_22[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[61U];
        __Vtemp_22[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[62U];
        __Vtemp_22[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[63U];
        bufp->chgWData(oldp+1094,(__Vtemp_22),128);
        bufp->chgBit(oldp+1098,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1099,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000000fU)))));
        bufp->chgWData(oldp+1100,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1104,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1105,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1109,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1113,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1117,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1121,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1125,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1129,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1133,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1137,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1138,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1139,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1140,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1141,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__1__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1142,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1143,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1144,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000010U)))));
        __Vtemp_23[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[64U];
        __Vtemp_23[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[65U];
        __Vtemp_23[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[66U];
        __Vtemp_23[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[67U];
        bufp->chgWData(oldp+1145,(__Vtemp_23),128);
        bufp->chgBit(oldp+1149,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1150,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000010U)))));
        bufp->chgWData(oldp+1151,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1155,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1156,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1160,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1164,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1168,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+1172,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1173,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1174,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1175,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1176,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1177,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1178,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1179,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000011U)))));
        __Vtemp_24[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[68U];
        __Vtemp_24[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[69U];
        __Vtemp_24[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[70U];
        __Vtemp_24[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[71U];
        bufp->chgWData(oldp+1180,(__Vtemp_24),128);
        bufp->chgBit(oldp+1184,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1185,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000011U)))));
        bufp->chgWData(oldp+1186,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1190,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1191,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1195,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1199,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1203,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+1207,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1208,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1209,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1210,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1211,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1212,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1213,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1214,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000012U)))));
        __Vtemp_25[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[72U];
        __Vtemp_25[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[73U];
        __Vtemp_25[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[74U];
        __Vtemp_25[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[75U];
        bufp->chgWData(oldp+1215,(__Vtemp_25),128);
        bufp->chgBit(oldp+1219,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1220,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000012U)))));
        bufp->chgWData(oldp+1221,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1225,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1226,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1230,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1234,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1238,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+1242,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1243,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1244,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1245,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1246,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1247,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt),5);
        bufp->chgCData(oldp+1248,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp),5);
        bufp->chgBit(oldp+1249,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000013U)))));
        __Vtemp_26[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[76U];
        __Vtemp_26[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[77U];
        __Vtemp_26[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[78U];
        __Vtemp_26[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[79U];
        bufp->chgWData(oldp+1250,(__Vtemp_26),128);
        bufp->chgBit(oldp+1254,((0x10U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1255,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000013U)))));
        bufp->chgWData(oldp+1256,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1260,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1261,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1265,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1269,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1273,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1277,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1281,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1285,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1289,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+1293,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+1297,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+1301,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+1305,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgWData(oldp+1309,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[12]),128);
        bufp->chgWData(oldp+1313,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[13]),128);
        bufp->chgWData(oldp+1317,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[14]),128);
        bufp->chgWData(oldp+1321,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[15]),128);
        bufp->chgCData(oldp+1325,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+1326,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+1327,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1328,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1329,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1330,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1331,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1332,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000014U)))));
        __Vtemp_27[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[80U];
        __Vtemp_27[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[81U];
        __Vtemp_27[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[82U];
        __Vtemp_27[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[83U];
        bufp->chgWData(oldp+1333,(__Vtemp_27),128);
        bufp->chgBit(oldp+1337,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1338,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000014U)))));
        bufp->chgWData(oldp+1339,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1343,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1344,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1348,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1352,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1356,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1360,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1364,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1368,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1372,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1376,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1377,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1378,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1379,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1380,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1381,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1382,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1383,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000015U)))));
        __Vtemp_28[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[84U];
        __Vtemp_28[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[85U];
        __Vtemp_28[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[86U];
        __Vtemp_28[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[87U];
        bufp->chgWData(oldp+1384,(__Vtemp_28),128);
        bufp->chgBit(oldp+1388,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1389,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000015U)))));
        bufp->chgWData(oldp+1390,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1394,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1395,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1399,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1403,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1407,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1411,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1415,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1419,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1423,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1427,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1428,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1429,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1430,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1431,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1432,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1433,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1434,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000016U)))));
        __Vtemp_29[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[88U];
        __Vtemp_29[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[89U];
        __Vtemp_29[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[90U];
        __Vtemp_29[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[91U];
        bufp->chgWData(oldp+1435,(__Vtemp_29),128);
        bufp->chgBit(oldp+1439,((0x0cU == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1440,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000016U)))));
        if ((0x0bU >= (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr))) {
            __Vtemp_32[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][0U];
            __Vtemp_32[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][1U];
            __Vtemp_32[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][2U];
            __Vtemp_32[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][3U];
        } else {
            __Vtemp_32[0U] = 0U;
            __Vtemp_32[1U] = 0U;
            __Vtemp_32[2U] = 0U;
            __Vtemp_32[3U] = 0U;
        }
        bufp->chgWData(oldp+1441,(__Vtemp_32),128);
        bufp->chgBit(oldp+1445,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1446,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1450,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1454,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1458,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1462,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1466,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1470,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1474,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+1478,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+1482,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+1486,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+1490,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgCData(oldp+1494,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+1495,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+1496,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1497,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1498,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1499,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1500,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1501,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000017U)))));
        __Vtemp_33[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[92U];
        __Vtemp_33[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[93U];
        __Vtemp_33[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[94U];
        __Vtemp_33[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[95U];
        bufp->chgWData(oldp+1502,(__Vtemp_33),128);
        bufp->chgBit(oldp+1506,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1507,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000017U)))));
        bufp->chgWData(oldp+1508,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1512,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1513,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1517,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1521,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1525,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1529,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1533,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1537,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1541,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1545,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1546,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1547,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1548,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1549,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__2__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1550,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1551,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1552,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000018U)))));
        __Vtemp_34[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[96U];
        __Vtemp_34[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[97U];
        __Vtemp_34[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[98U];
        __Vtemp_34[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[99U];
        bufp->chgWData(oldp+1553,(__Vtemp_34),128);
        bufp->chgBit(oldp+1557,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1558,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000018U)))));
        bufp->chgWData(oldp+1559,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1563,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1564,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1568,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1572,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1576,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+1580,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1581,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1582,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1583,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1584,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1585,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1586,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1587,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000019U)))));
        __Vtemp_35[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[100U];
        __Vtemp_35[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[101U];
        __Vtemp_35[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[102U];
        __Vtemp_35[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[103U];
        bufp->chgWData(oldp+1588,(__Vtemp_35),128);
        bufp->chgBit(oldp+1592,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1593,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000019U)))));
        bufp->chgWData(oldp+1594,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1598,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1599,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1603,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1607,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1611,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+1615,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1616,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1617,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1618,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1619,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1620,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1621,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1622,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000001aU)))));
        __Vtemp_36[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[104U];
        __Vtemp_36[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[105U];
        __Vtemp_36[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[106U];
        __Vtemp_36[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[107U];
        bufp->chgWData(oldp+1623,(__Vtemp_36),128);
        bufp->chgBit(oldp+1627,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1628,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000001aU)))));
        bufp->chgWData(oldp+1629,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1633,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1634,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1638,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1642,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1646,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+1650,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1651,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1652,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1653,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1654,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1655,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt),5);
        bufp->chgCData(oldp+1656,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp),5);
        bufp->chgBit(oldp+1657,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000001bU)))));
        __Vtemp_37[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[108U];
        __Vtemp_37[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[109U];
        __Vtemp_37[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[110U];
        __Vtemp_37[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[111U];
        bufp->chgWData(oldp+1658,(__Vtemp_37),128);
        bufp->chgBit(oldp+1662,((0x10U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1663,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000001bU)))));
        bufp->chgWData(oldp+1664,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1668,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1669,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1673,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1677,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1681,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1685,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1689,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1693,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1697,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+1701,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+1705,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+1709,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+1713,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgWData(oldp+1717,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[12]),128);
        bufp->chgWData(oldp+1721,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[13]),128);
        bufp->chgWData(oldp+1725,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[14]),128);
        bufp->chgWData(oldp+1729,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[15]),128);
        bufp->chgCData(oldp+1733,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+1734,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+1735,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1736,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1737,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1738,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1739,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1740,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000001cU)))));
        __Vtemp_38[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[112U];
        __Vtemp_38[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[113U];
        __Vtemp_38[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[114U];
        __Vtemp_38[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[115U];
        bufp->chgWData(oldp+1741,(__Vtemp_38),128);
        bufp->chgBit(oldp+1745,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1746,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000001cU)))));
        bufp->chgWData(oldp+1747,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1751,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1752,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1756,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1760,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1764,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1768,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1772,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1776,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1780,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1784,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1785,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1786,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1787,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1788,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1789,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1790,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1791,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000001dU)))));
        __Vtemp_39[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[116U];
        __Vtemp_39[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[117U];
        __Vtemp_39[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[118U];
        __Vtemp_39[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[119U];
        bufp->chgWData(oldp+1792,(__Vtemp_39),128);
        bufp->chgBit(oldp+1796,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1797,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000001dU)))));
        bufp->chgWData(oldp+1798,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1802,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1803,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1807,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1811,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1815,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1819,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1823,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1827,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1831,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1835,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1836,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1837,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1838,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1839,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1840,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1841,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1842,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000001eU)))));
        __Vtemp_40[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[120U];
        __Vtemp_40[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[121U];
        __Vtemp_40[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[122U];
        __Vtemp_40[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[123U];
        bufp->chgWData(oldp+1843,(__Vtemp_40),128);
        bufp->chgBit(oldp+1847,((0x0cU == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1848,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000001eU)))));
        if ((0x0bU >= (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr))) {
            __Vtemp_43[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][0U];
            __Vtemp_43[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][1U];
            __Vtemp_43[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][2U];
            __Vtemp_43[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][3U];
        } else {
            __Vtemp_43[0U] = 0U;
            __Vtemp_43[1U] = 0U;
            __Vtemp_43[2U] = 0U;
            __Vtemp_43[3U] = 0U;
        }
        bufp->chgWData(oldp+1849,(__Vtemp_43),128);
        bufp->chgBit(oldp+1853,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1854,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1858,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1862,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1866,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1870,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1874,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1878,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1882,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+1886,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+1890,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+1894,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+1898,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgCData(oldp+1902,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+1903,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+1904,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1905,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1906,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1907,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+1908,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+1909,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x0000001fU)))));
        __Vtemp_44[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[124U];
        __Vtemp_44[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[125U];
        __Vtemp_44[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[126U];
        __Vtemp_44[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[127U];
        bufp->chgWData(oldp+1910,(__Vtemp_44),128);
        bufp->chgBit(oldp+1914,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1915,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x0000001fU)))));
        bufp->chgWData(oldp+1916,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1920,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1921,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1925,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1929,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1933,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+1937,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+1941,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+1945,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+1949,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+1953,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+1954,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+1955,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1956,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1957,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__3__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1958,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1959,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1960,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000020U)))));
        __Vtemp_45[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[128U];
        __Vtemp_45[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[129U];
        __Vtemp_45[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[130U];
        __Vtemp_45[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[131U];
        bufp->chgWData(oldp+1961,(__Vtemp_45),128);
        bufp->chgBit(oldp+1965,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+1966,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000020U)))));
        bufp->chgWData(oldp+1967,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+1971,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+1972,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+1976,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+1980,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+1984,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+1988,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1989,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+1990,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+1991,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+1992,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__0__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+1993,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+1994,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+1995,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000021U)))));
        __Vtemp_46[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[132U];
        __Vtemp_46[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[133U];
        __Vtemp_46[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[134U];
        __Vtemp_46[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[135U];
        bufp->chgWData(oldp+1996,(__Vtemp_46),128);
        bufp->chgBit(oldp+2000,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+2001,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000021U)))));
        bufp->chgWData(oldp+2002,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+2006,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+2007,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+2011,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+2015,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+2019,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+2023,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+2024,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+2025,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+2026,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+2027,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__1__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+2028,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt),3);
        bufp->chgCData(oldp+2029,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__free_tmp),3);
        bufp->chgBit(oldp+2030,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000022U)))));
        __Vtemp_47[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[136U];
        __Vtemp_47[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[137U];
        __Vtemp_47[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[138U];
        __Vtemp_47[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[139U];
        bufp->chgWData(oldp+2031,(__Vtemp_47),128);
        bufp->chgBit(oldp+2035,((4U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+2036,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000022U)))));
        bufp->chgWData(oldp+2037,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+2041,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+2042,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+2046,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+2050,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+2054,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgCData(oldp+2058,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__wr_ptr),2);
        bufp->chgCData(oldp+2059,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__rd_ptr),2);
        bufp->chgBit(oldp+2060,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+2061,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+2062,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__2__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+2063,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt),5);
        bufp->chgCData(oldp+2064,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__free_tmp),5);
        bufp->chgBit(oldp+2065,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000023U)))));
        __Vtemp_48[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[140U];
        __Vtemp_48[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[141U];
        __Vtemp_48[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[142U];
        __Vtemp_48[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[143U];
        bufp->chgWData(oldp+2066,(__Vtemp_48),128);
        bufp->chgBit(oldp+2070,((0x10U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+2071,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000023U)))));
        bufp->chgWData(oldp+2072,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+2076,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+2077,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+2081,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+2085,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+2089,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+2093,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+2097,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+2101,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+2105,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+2109,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+2113,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+2117,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+2121,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgWData(oldp+2125,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[12]),128);
        bufp->chgWData(oldp+2129,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[13]),128);
        bufp->chgWData(oldp+2133,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[14]),128);
        bufp->chgWData(oldp+2137,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__mem[15]),128);
        bufp->chgCData(oldp+2141,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+2142,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+2143,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+2144,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+2145,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__3__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+2146,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+2147,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+2148,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000024U)))));
        __Vtemp_49[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[144U];
        __Vtemp_49[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[145U];
        __Vtemp_49[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[146U];
        __Vtemp_49[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[147U];
        bufp->chgWData(oldp+2149,(__Vtemp_49),128);
        bufp->chgBit(oldp+2153,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+2154,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000024U)))));
        bufp->chgWData(oldp+2155,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+2159,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+2160,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+2164,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+2168,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+2172,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+2176,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+2180,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+2184,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+2188,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+2192,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+2193,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+2194,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+2195,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+2196,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__4__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+2197,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+2198,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+2199,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000025U)))));
        __Vtemp_50[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[148U];
        __Vtemp_50[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[149U];
        __Vtemp_50[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[150U];
        __Vtemp_50[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[151U];
        bufp->chgWData(oldp+2200,(__Vtemp_50),128);
        bufp->chgBit(oldp+2204,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+2205,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000025U)))));
        bufp->chgWData(oldp+2206,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+2210,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+2211,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+2215,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+2219,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+2223,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+2227,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+2231,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+2235,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+2239,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+2243,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+2244,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+2245,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+2246,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+2247,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__5__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+2248,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+2249,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+2250,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000026U)))));
        __Vtemp_51[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[152U];
        __Vtemp_51[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[153U];
        __Vtemp_51[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[154U];
        __Vtemp_51[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[155U];
        bufp->chgWData(oldp+2251,(__Vtemp_51),128);
        bufp->chgBit(oldp+2255,((0x0cU == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+2256,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000026U)))));
        if ((0x0bU >= (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr))) {
            __Vtemp_54[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][0U];
            __Vtemp_54[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][1U];
            __Vtemp_54[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][2U];
            __Vtemp_54[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem
                [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr][3U];
        } else {
            __Vtemp_54[0U] = 0U;
            __Vtemp_54[1U] = 0U;
            __Vtemp_54[2U] = 0U;
            __Vtemp_54[3U] = 0U;
        }
        bufp->chgWData(oldp+2257,(__Vtemp_54),128);
        bufp->chgBit(oldp+2261,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+2262,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+2266,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+2270,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+2274,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+2278,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+2282,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+2286,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+2290,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgWData(oldp+2294,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[8]),128);
        bufp->chgWData(oldp+2298,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[9]),128);
        bufp->chgWData(oldp+2302,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[10]),128);
        bufp->chgWData(oldp+2306,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__mem[11]),128);
        bufp->chgCData(oldp+2310,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__wr_ptr),4);
        bufp->chgCData(oldp+2311,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__rd_ptr),4);
        bufp->chgBit(oldp+2312,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+2313,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+2314,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__6__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
        bufp->chgCData(oldp+2315,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt),4);
        bufp->chgCData(oldp+2316,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__free_tmp),4);
        bufp->chgBit(oldp+2317,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_push 
                                               >> 0x00000027U)))));
        __Vtemp_55[0U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[156U];
        __Vtemp_55[1U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[157U];
        __Vtemp_55[2U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[158U];
        __Vtemp_55[3U] = vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_din[159U];
        bufp->chgWData(oldp+2318,(__Vtemp_55),128);
        bufp->chgBit(oldp+2322,((8U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgBit(oldp+2323,((1U & (IData)((vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__fifo_pop 
                                               >> 0x00000027U)))));
        bufp->chgWData(oldp+2324,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem
                                  [vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr]),128);
        bufp->chgBit(oldp+2328,((0U == (IData)(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__cnt))));
        bufp->chgWData(oldp+2329,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[0]),128);
        bufp->chgWData(oldp+2333,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[1]),128);
        bufp->chgWData(oldp+2337,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[2]),128);
        bufp->chgWData(oldp+2341,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[3]),128);
        bufp->chgWData(oldp+2345,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[4]),128);
        bufp->chgWData(oldp+2349,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[5]),128);
        bufp->chgWData(oldp+2353,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[6]),128);
        bufp->chgWData(oldp+2357,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__mem[7]),128);
        bufp->chgCData(oldp+2361,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__wr_ptr),3);
        bufp->chgCData(oldp+2362,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__rd_ptr),3);
        bufp->chgBit(oldp+2363,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_push));
        bufp->chgBit(oldp+2364,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__do_pop));
        bufp->chgIData(oldp+2365,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__GEN_PORTS__BRA__4__KET____DOT__GEN_VCS__BRA__7__KET____DOT__fifo_i__DOT__unnamedblk1__DOT__free_i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+2366,(vlSelfRef.tb_router_multibeat_hold__DOT__in_valid),5);
        bufp->chgWData(oldp+2367,(vlSelfRef.tb_router_multibeat_hold__DOT__in_flit),640);
        bufp->chgIData(oldp+2387,(vlSelfRef.tb_router_multibeat_hold__DOT__cycle),32);
        bufp->chgQData(oldp+2388,(vlSelfRef.tb_router_multibeat_hold__DOT__hdr),36);
    }
    bufp->chgBit(oldp+2390,(vlSelfRef.clk));
    bufp->chgBit(oldp+2391,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+2392,(vlSelfRef.tb_router_multibeat_hold__DOT__dut__DOT__in_ready),5);
}

void Vtb_router_multibeat_hold___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_router_multibeat_hold___024root__trace_cleanup\n"); );
    // Body
    Vtb_router_multibeat_hold___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_router_multibeat_hold___024root*>(voidSelf);
    Vtb_router_multibeat_hold__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
