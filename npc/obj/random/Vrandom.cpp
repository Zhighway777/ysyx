// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrandom.h"
#include "Vrandom__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrandom::Vrandom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrandom__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rand_num{vlSymsp->TOP.rand_num}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrandom::Vrandom(const char* _vcname__)
    : Vrandom(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrandom::~Vrandom() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrandom___024root___eval_debug_assertions(Vrandom___024root* vlSelf);
#endif  // VL_DEBUG
void Vrandom___024root___eval_static(Vrandom___024root* vlSelf);
void Vrandom___024root___eval_initial(Vrandom___024root* vlSelf);
void Vrandom___024root___eval_settle(Vrandom___024root* vlSelf);
void Vrandom___024root___eval(Vrandom___024root* vlSelf);

void Vrandom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrandom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrandom___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrandom___024root___eval_static(&(vlSymsp->TOP));
        Vrandom___024root___eval_initial(&(vlSymsp->TOP));
        Vrandom___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrandom___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrandom::eventsPending() { return false; }

uint64_t Vrandom::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrandom::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrandom___024root___eval_final(Vrandom___024root* vlSelf);

VL_ATTR_COLD void Vrandom::final() {
    Vrandom___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrandom::hierName() const { return vlSymsp->name(); }
const char* Vrandom::modelName() const { return "Vrandom"; }
unsigned Vrandom::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vrandom::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrandom___024root__trace_init_top(Vrandom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vrandom___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrandom___024root__trace_register(Vrandom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrandom::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrandom::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrandom___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
