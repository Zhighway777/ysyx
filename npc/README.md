文件介绍
constr
|------约束文件 通过修改这里来改变top.v和NVBroad中的引脚链接
|
csrc/csrc _ bkup
|
|------C++编写的仿真文件，结合verilator用于对verilog进行波形仿真
obj
|
|------用于存放verilator生成的仿真相关文件
vcd
|
|------用于存放verilator生成的波形文件
vsrc
|
|------存放所有电路子模块和top.v顶层文件
|（需要保证所有文件的语法正确，否则将make失败）
vsrc _ bkup
|
|------存放不同模块的top文件/未完成的电路文件

使用方法：
1.仿真
	修改Makefile中的SIMNAME 对硬件进行波形仿真
	其中SIMNAME = xxx    存放于(./csrc_bkup/sim_)xxx 与verilog名称保持一致
	
	在/npc文件夹下 make sim即可得到仿真结果
2.接入NVBoard
	将./vsrc_bkup/xxx_top.v 复制到vsrc/top.v
	即： cp ./vsrc_bkup/xxx_top.v vsrc/top.v

	在/npc文件夹下 make clean 后 make run
