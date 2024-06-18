TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
										--timing \
				-O3 --x-assign fast --x-initial fast --noassert#For best performance

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

CSRCBKUP = $(shell find $(abspath ./csrc_bkup) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))


all: default

run:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(BIN)
	@$^

SIMNAME = mux21

sim:
	verilator -Wall -I$(abspath ./vsrc) ./vsrc/$(SIMNAME).v ./csrc_bkup/sim_$(SIMNAME).cpp --Mdir $(SIMNAME) -cc --trace --exe --build -Wno-UNOPTFLAT --timing
	./$(SIMNAME)/V$(SIMNAME)
	rsync -a $(SIMNAME)/ obj/$(SIMNAME)
	rm -rf $(SIMNAME)/
	./obj/$(SIMNAME)/V$(SIMNAME)
	gtkwave dump.vcd 
	mv -i dump.vcd ./vcd/$(SIMNAME).vcd

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run sim
include ../Makefile

