#include "verilated_vcd_c.h"
#include "../ps2_keyboard_model/Vps2_keyboard_model.h"
#include "verilated.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vps2_keyboard_model* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vps2_keyboard_model;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

void send_keyboard_code(uint8_t code) { 
    top->code = code;
	 	step_and_dump_wave();
}

int main() {
  sim_init();
// 初始化仿真输入
	while (!contextp->gotFinish()){
	//	send_keyboard_code(0x00);
	//	send_keyboard_code(0x1d);
	//	send_keyboard_code(0xf0);
	//	send_keyboard_code(0x1d);   
	}
     
  sim_exit();
	return 0;
}
