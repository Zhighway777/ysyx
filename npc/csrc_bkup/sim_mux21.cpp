#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../mux21/Vmux21.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux21* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux21;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();

  top->s=0; top->a=0; top->b=0;  step_and_dump_wave();   // 将s，a和b均初始化为“0”
                      top->b=1;  step_and_dump_wave();   // 将b改为“1”，s和a的值不变，继续保持“0”，
            top->a=1; top->b=0;  step_and_dump_wave();   // 将a，b分别改为“1”和“0”，s的值不变，
                      top->b=1;  step_and_dump_wave();   // 将b改为“1”，s和a的值不变，维持10个时间单位
  top->s=1; top->a=0; top->b=0;  step_and_dump_wave();   // 将s，a，b分别变为“1,0,0”，维持10个时间单位
                      top->b=1;  step_and_dump_wave();
            top->a=1; top->b=0;  step_and_dump_wave();
                      top->b=1;  step_and_dump_wave();

  sim_exit();
}
