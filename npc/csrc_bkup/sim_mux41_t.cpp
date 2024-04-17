#include "verilated.h"
#include "verilated_vcd_c.h"
//you should modify the follow path into your filename
#include "../mux41_t/Vmux41_t.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux41_t* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux41_t;
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

  top->y=0; top->x0=0; top->x1=0; top->x2=0; top->x3=0;  step_and_dump_wave();   // 将s，a和b均初始化为“0”
                      top->x1=1;  step_and_dump_wave();   // 将b改为“1”，s和a的值不变，继续保持“0”        
            top->x0=1; top->x1=0;  step_and_dump_wave();   // 将a，b分别改为“1”和“0”，s的值不变，
                      top->x1=1;  step_and_dump_wave();   // 将b改为“1”，s和a的值不变，维持10个时间单位
               
  top->y=1; top->x0=0; top->x1=0;  top->x2=0; top->x3=0;  step_and_dump_wave();   // 将s，a，b分别变为“1,0,0”，维持10个时间单位
                      top->x1=2;  step_and_dump_wave();
            top->x0=2; top->x1=0;  step_and_dump_wave();
                      top->x1=2;  step_and_dump_wave();
  top->y=2; top->x0=0; top->x1=0;  top->x2=0; top->x3=0;  step_and_dump_wave();   
                      top->x3=1;  step_and_dump_wave();
            top->x2=1; top->x3=0;  step_and_dump_wave();
                      top->x3=1;  step_and_dump_wave();
  top->y=3; top->x0=0; top->x1=0;  top->x2=0; top->x3=0;  step_and_dump_wave();  
                      top->x3=3;  step_and_dump_wave();
            top->x2=3; top->x3=0;  step_and_dump_wave();
                      top->x3=3;  step_and_dump_wave();

  sim_exit();
}

