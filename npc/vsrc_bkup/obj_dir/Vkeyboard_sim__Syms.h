// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKEYBOARD_SIM__SYMS_H_
#define VERILATED_VKEYBOARD_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vkeyboard_sim.h"

// INCLUDE MODULE CLASSES
#include "Vkeyboard_sim___024root.h"

// SYMS CLASS (contains all model state)
class Vkeyboard_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkeyboard_sim* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkeyboard_sim___024root        TOP;

    // CONSTRUCTORS
    Vkeyboard_sim__Syms(VerilatedContext* contextp, const char* namep, Vkeyboard_sim* modelp);
    ~Vkeyboard_sim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
