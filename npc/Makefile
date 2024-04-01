all:
	@echo "Write this Makefile by your self."


sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall ./vsrc/mux21.v ./csrc/sim_mux21.cpp -cc --trace --exe --build
	./obj_dir/Vmux21
	gtkwave wave.vcd

include ../Makefile
