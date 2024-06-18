// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkeyboard_sim__Syms.h"
#include "Vkeyboard_sim_keyboard_sim.h"

VL_INLINE_OPT void Vkeyboard_sim_keyboard_sim___nba_sequent__TOP__keyboard_sim__0(Vkeyboard_sim_keyboard_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vkeyboard_sim_keyboard_sim___nba_sequent__TOP__keyboard_sim__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__inst__DOT__ps2_clk_sync;
    __Vdly__inst__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__inst__DOT__r_ptr;
    __Vdly__inst__DOT__r_ptr = 0;
    CData/*2:0*/ __Vdlyvdim0__inst__DOT__fifo__v0;
    __Vdlyvdim0__inst__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__inst__DOT__fifo__v0;
    __Vdlyvval__inst__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__inst__DOT__fifo__v0;
    __Vdlyvset__inst__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__inst__DOT__w_ptr;
    __Vdly__inst__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__inst__DOT__count;
    __Vdly__inst__DOT__count = 0;
    // Body
    __Vdly__inst__DOT__ps2_clk_sync = vlSelf->__PVT__inst__DOT__ps2_clk_sync;
    __Vdly__inst__DOT__count = vlSelf->__PVT__inst__DOT__count;
    __Vdly__inst__DOT__w_ptr = vlSelf->__PVT__inst__DOT__w_ptr;
    __Vdly__inst__DOT__r_ptr = vlSelf->__PVT__inst__DOT__r_ptr;
    __Vdlyvset__inst__DOT__fifo__v0 = 0U;
    __Vdly__inst__DOT__ps2_clk_sync = (1U | (6U & ((IData)(vlSelf->__PVT__inst__DOT__ps2_clk_sync) 
                                                   << 1U)));
    if (vlSymsp->TOP.clrn) {
        if (vlSelf->__PVT__ready) {
            if ((1U & (~ (IData)(vlSymsp->TOP.nextdata_n)))) {
                __Vdly__inst__DOT__r_ptr = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__inst__DOT__r_ptr)));
                if (((IData)(vlSelf->__PVT__inst__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__inst__DOT__r_ptr))))) {
                    vlSelf->__PVT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->__PVT__inst__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->__PVT__inst__DOT__count))) {
                if ((((~ (IData)(vlSelf->__PVT__inst__DOT__buffer)) 
                      & (IData)(vlSelf->__PVT__kbd_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->__PVT__inst__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__inst__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->__PVT__inst__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__inst__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__inst__DOT__fifo__v0 
                        = vlSelf->__PVT__inst__DOT__w_ptr;
                    vlSelf->__PVT__ready = 1U;
                    __Vdly__inst__DOT__w_ptr = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__inst__DOT__w_ptr)));
                    vlSelf->__PVT__overflow = ((IData)(vlSelf->__PVT__overflow) 
                                               | ((IData)(vlSelf->__PVT__inst__DOT__r_ptr) 
                                                  == 
                                                  (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__inst__DOT__w_ptr)))));
                }
                __Vdly__inst__DOT__count = 0U;
            } else {
                vlSelf->inst__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->__PVT__kbd_data;
                if ((9U >= (IData)(vlSelf->__PVT__inst__DOT__count))) {
                    vlSelf->__PVT__inst__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->__PVT__inst__DOT__count))) 
                            & (IData)(vlSelf->__PVT__inst__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->inst__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->__PVT__inst__DOT__count))));
                }
                __Vdly__inst__DOT__count = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__inst__DOT__count)));
            }
        }
    } else {
        __Vdly__inst__DOT__count = 0U;
        __Vdly__inst__DOT__w_ptr = 0U;
        __Vdly__inst__DOT__r_ptr = 0U;
        vlSelf->__PVT__overflow = 0U;
        vlSelf->__PVT__ready = 0U;
    }
    vlSelf->__PVT__inst__DOT__r_ptr = __Vdly__inst__DOT__r_ptr;
    vlSelf->__PVT__inst__DOT__ps2_clk_sync = __Vdly__inst__DOT__ps2_clk_sync;
    vlSelf->__PVT__inst__DOT__w_ptr = __Vdly__inst__DOT__w_ptr;
    vlSelf->__PVT__inst__DOT__count = __Vdly__inst__DOT__count;
    if (__Vdlyvset__inst__DOT__fifo__v0) {
        vlSelf->__PVT__inst__DOT__fifo[__Vdlyvdim0__inst__DOT__fifo__v0] 
            = __Vdlyvval__inst__DOT__fifo__v0;
    }
}
