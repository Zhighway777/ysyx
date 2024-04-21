// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfsm_bin__Syms.h"


VL_ATTR_COLD void Vfsm_bin___024root__trace_init_sub__TOP__0(Vfsm_bin___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_bin___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"in", false,-1);
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBit(c+61,"out", false,-1);
    tracep->pushNamePrefix("fsm_bin ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"in", false,-1);
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBit(c+61,"out", false,-1);
    tracep->declBus(c+68,"S0", false,-1, 3,0);
    tracep->declBus(c+69,"S1", false,-1, 3,0);
    tracep->declBus(c+70,"S2", false,-1, 3,0);
    tracep->declBus(c+71,"S3", false,-1, 3,0);
    tracep->declBus(c+72,"S4", false,-1, 3,0);
    tracep->declBus(c+73,"S5", false,-1, 3,0);
    tracep->declBus(c+74,"S6", false,-1, 3,0);
    tracep->declBus(c+75,"S7", false,-1, 3,0);
    tracep->declBus(c+76,"S8", false,-1, 3,0);
    tracep->declBus(c+62,"state_din", false,-1, 3,0);
    tracep->declBus(c+55,"state_dout", false,-1, 3,0);
    tracep->declBit(c+77,"state_wen", false,-1);
    tracep->pushNamePrefix("outMux ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
    tracep->declBus(c+55,"key", false,-1, 3,0);
    tracep->declBus(c+81,"default_out", false,-1, 0,0);
    tracep->declQuad(c+82,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
    tracep->declBus(c+55,"key", false,-1, 3,0);
    tracep->declBus(c+81,"default_out", false,-1, 0,0);
    tracep->declQuad(c+82,"lut", false,-1, 44,0);
    tracep->declBus(c+84,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+10+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+56,"lut_out", false,-1, 0,0);
    tracep->declBit(c+57,"hit", false,-1);
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("state ");
    tracep->declBus(c+79,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"INIT", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+60,"reset", false,-1);
    tracep->declBus(c+62,"data_in", false,-1, 3,0);
    tracep->declBit(c+77,"write_enable", false,-1);
    tracep->declBus(c+55,"data_out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stateMux ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+79,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 3,0);
    tracep->declBus(c+55,"key", false,-1, 3,0);
    tracep->declBus(c+68,"default_out", false,-1, 3,0);
    tracep->declArray(c+63,"lut", false,-1, 71,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+78,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+79,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+79,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 3,0);
    tracep->declBus(c+55,"key", false,-1, 3,0);
    tracep->declBus(c+68,"default_out", false,-1, 3,0);
    tracep->declArray(c+63,"lut", false,-1, 71,0);
    tracep->declBus(c+87,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+37+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+28+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+46+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+66,"lut_out", false,-1, 3,0);
    tracep->declBit(c+67,"hit", false,-1);
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vfsm_bin___024root__trace_init_top(Vfsm_bin___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_bin___024root__trace_init_top\n"); );
    // Body
    Vfsm_bin___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfsm_bin___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsm_bin___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfsm_bin___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfsm_bin___024root__trace_register(Vfsm_bin___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_bin___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfsm_bin___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfsm_bin___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfsm_bin___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfsm_bin___024root__trace_full_sub_0(Vfsm_bin___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfsm_bin___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_bin___024root__trace_full_top_0\n"); );
    // Init
    Vfsm_bin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm_bin___024root*>(voidSelf);
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfsm_bin___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfsm_bin___024root__trace_full_sub_0(Vfsm_bin___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_bin___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h573b1681__0;
    VlWide<3>/*95:0*/ __Vtemp_h4489e183__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+4,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+5,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+6,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+7,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+8,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[7]),5);
    bufp->fullCData(oldp+9,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__pair_list[8]),5);
    bufp->fullCData(oldp+10,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+11,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+12,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+13,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+14,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+15,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+16,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+17,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+18,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullBit(oldp+19,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+20,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+21,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+22,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+23,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+24,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+25,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+26,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+27,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__data_list[8]));
    bufp->fullCData(oldp+28,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+29,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+30,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+31,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+32,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+33,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+34,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+35,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+36,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+37,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+38,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+39,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+40,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+41,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+42,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[5]),8);
    bufp->fullCData(oldp+43,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[6]),8);
    bufp->fullCData(oldp+44,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[7]),8);
    bufp->fullCData(oldp+45,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__pair_list[8]),8);
    bufp->fullCData(oldp+46,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+47,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+48,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+49,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+50,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+51,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+52,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+53,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+54,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__data_list[8]),4);
    bufp->fullCData(oldp+55,(vlSelf->fsm_bin__DOT__state_dout),4);
    bufp->fullBit(oldp+56,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+57,(vlSelf->fsm_bin__DOT__outMux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+58,(vlSelf->clk));
    bufp->fullBit(oldp+59,(vlSelf->in));
    bufp->fullBit(oldp+60,(vlSelf->rst));
    bufp->fullBit(oldp+61,(vlSelf->out));
    bufp->fullCData(oldp+62,(vlSelf->fsm_bin__DOT__state_din),4);
    __Vtemp_h573b1681__0[1U] = (IData)(((0x1020304000000000ULL 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->in)
                                                               ? 5U
                                                               : 2U))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->in)
                                                                  ? 5U
                                                                  : 3U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->in)
                                                                     ? 5U
                                                                     : 4U))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->in)
                                                                        ? 5U
                                                                        : 4U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0x50607080U 
                                                                        | ((((IData)(vlSelf->in)
                                                                              ? 6U
                                                                              : 1U) 
                                                                            << 0x18U) 
                                                                           | ((((IData)(vlSelf->in)
                                                                                 ? 7U
                                                                                 : 1U) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))) 
                                        >> 0x20U));
    __Vtemp_h4489e183__0[0U] = (IData)((0x1020304000000000ULL 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->in)
                                                              ? 5U
                                                              : 2U))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->in)
                                                                 ? 5U
                                                                 : 3U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->in)
                                                                    ? 5U
                                                                    : 4U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->in)
                                                                       ? 5U
                                                                       : 4U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0x50607080U 
                                                                       | ((((IData)(vlSelf->in)
                                                                             ? 6U
                                                                             : 1U) 
                                                                           << 0x18U) 
                                                                          | ((((IData)(vlSelf->in)
                                                                                ? 7U
                                                                                : 1U) 
                                                                              << 0x10U) 
                                                                             | ((((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))));
    __Vtemp_h4489e183__0[1U] = __Vtemp_h573b1681__0[1U];
    __Vtemp_h4489e183__0[2U] = ((IData)(vlSelf->in)
                                 ? 5U : 1U);
    bufp->fullWData(oldp+63,(__Vtemp_h4489e183__0),72);
    bufp->fullCData(oldp+66,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+67,(vlSelf->fsm_bin__DOT__stateMux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+68,(0U),4);
    bufp->fullCData(oldp+69,(1U),4);
    bufp->fullCData(oldp+70,(2U),4);
    bufp->fullCData(oldp+71,(3U),4);
    bufp->fullCData(oldp+72,(4U),4);
    bufp->fullCData(oldp+73,(5U),4);
    bufp->fullCData(oldp+74,(6U),4);
    bufp->fullCData(oldp+75,(7U),4);
    bufp->fullCData(oldp+76,(8U),4);
    bufp->fullBit(oldp+77,(1U));
    bufp->fullIData(oldp+78,(9U),32);
    bufp->fullIData(oldp+79,(4U),32);
    bufp->fullIData(oldp+80,(1U),32);
    bufp->fullBit(oldp+81,(0U));
    bufp->fullQData(oldp+82,(0x110c9531d1ULL),45);
    bufp->fullIData(oldp+84,(5U),32);
    bufp->fullIData(oldp+85,(9U),32);
    bufp->fullIData(oldp+86,(0U),32);
    bufp->fullIData(oldp+87,(8U),32);
}
