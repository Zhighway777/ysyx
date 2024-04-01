// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vm_mux21.h for the primary calling header

#ifndef VERILATED_VM_MUX21___024ROOT_H_
#define VERILATED_VM_MUX21___024ROOT_H_  // guard

#include "verilated.h"

class Vm_mux21__Syms;

class Vm_mux21___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(s,0,0);
    VL_OUT8(y,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vm_mux21__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vm_mux21___024root(Vm_mux21__Syms* symsp, const char* v__name);
    ~Vm_mux21___024root();
    VL_UNCOPYABLE(Vm_mux21___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
