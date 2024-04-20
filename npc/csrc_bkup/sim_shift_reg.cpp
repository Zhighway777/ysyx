#include "verilated.h"
#include "verilated_vcd_c.h"
//modify here
#define VSIMNAME Vshift_reg
#include "../shift_reg/Vshift_reg.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

//modify here
static VSIMNAME* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  //modify here
	top = new VSIMNAME;
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
	//init
	top->clk = 0;
	top->datain = 0;
	top->setdata = 0b00001111; //0000_1111
	/*******
	 * 1.clear
	 * 2.setdata = 0f
	 * 3. 逻辑右移*3
	 * 4. 逻辑左移
	 * 5. 算术右移 
	 * 6. 循环右移 
	 * 7. 循环右移 
	 * 8. 循环左移 
	 *******/

  top->contrl = 0b000; top->clk = !(top->clk); top->clk = !(top->clk);

	step_and_dump_wave();
	top->contrl = 0b001; top->clk = !(top->clk); top->clk = !(top->clk);

	step_and_dump_wave();
	top->contrl = 0b010; 
    top->clk = !(top->clk);top->clk = !(top->clk);

	step_and_dump_wave();
	top->clk = !(top->clk);top->clk = !(top->clk);

	step_and_dump_wave();
	top->clk = !(top->clk);
	step_and_dump_wave();
	top->contrl = 0b011;	top->clk = !(top->clk);
	step_and_dump_wave();
	top->contrl = 0b100;  top->clk = !(top->clk);
	step_and_dump_wave(); top->clk = !(top->clk);
	step_and_dump_wave();
  top->contrl = 0b101;	 top->clk = !(top->clk);
	step_and_dump_wave(); top->clk = !(top->clk);
	step_and_dump_wave();
	top->contrl = 0b110; top->clk = !(top->clk);
	step_and_dump_wave();
	 top->clk = !(top->clk);
	step_and_dump_wave();
 top->contrl = 0b111; top->clk = !(top->clk);
	step_and_dump_wave();
 top->clk = !(top->clk);
	step_and_dump_wave();
 sim_exit();
}
