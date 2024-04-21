// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfsm_bin.h"
#include "Vfsm_bin__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfsm_bin::Vfsm_bin(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfsm_bin__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfsm_bin::Vfsm_bin(const char* _vcname__)
    : Vfsm_bin(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfsm_bin::~Vfsm_bin() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfsm_bin___024root___eval_debug_assertions(Vfsm_bin___024root* vlSelf);
#endif  // VL_DEBUG
void Vfsm_bin___024root___eval_static(Vfsm_bin___024root* vlSelf);
void Vfsm_bin___024root___eval_initial(Vfsm_bin___024root* vlSelf);
void Vfsm_bin___024root___eval_settle(Vfsm_bin___024root* vlSelf);
void Vfsm_bin___024root___eval(Vfsm_bin___024root* vlSelf);

void Vfsm_bin::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfsm_bin::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfsm_bin___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfsm_bin___024root___eval_static(&(vlSymsp->TOP));
        Vfsm_bin___024root___eval_initial(&(vlSymsp->TOP));
        Vfsm_bin___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfsm_bin___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfsm_bin::eventsPending() { return false; }

uint64_t Vfsm_bin::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfsm_bin::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfsm_bin___024root___eval_final(Vfsm_bin___024root* vlSelf);

VL_ATTR_COLD void Vfsm_bin::final() {
    Vfsm_bin___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfsm_bin::hierName() const { return vlSymsp->name(); }
const char* Vfsm_bin::modelName() const { return "Vfsm_bin"; }
unsigned Vfsm_bin::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfsm_bin::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfsm_bin___024root__trace_init_top(Vfsm_bin___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfsm_bin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm_bin___024root*>(voidSelf);
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfsm_bin___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfsm_bin___024root__trace_register(Vfsm_bin___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfsm_bin::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfsm_bin::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfsm_bin___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
