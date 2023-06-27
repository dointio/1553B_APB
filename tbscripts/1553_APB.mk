
VERILATOR_FLAGS := --Wall --trace --timing --timescale 1ns/1ps
#checks
VERILATOR_FLAGS += --Wno-UNUSEDPARAM
VERILATOR_FLAGS += --Wno-PINCONNECTEMPTY
VERILATOR_FLAGS += --Wno-PINMISSING
VERILATOR_FLAGS += --Wno-UNUSEDSIGNAL
VERILATOR_FLAGS += --Wno-WIDTHEXPAND
VERILATOR_FLAGS += --Wno-WIDTHTRUNC
VERILATOR_FLAGS += --Wno-UNDRIVEN
VERILATOR_FLAGS += --Wno-UNUSEDGENVAR
VERILATOR_FLAGS += --Wno-SYNCASYNCNET
VERILATOR_FLAGS += -Wno-fatal 
#store:--Wno-CASEINCOMPLETE  --Wno-UNOPTFLAT

RTL_LIST_VLOG := \
				../vtb/tb_1553_apb.v \
				../vsrc/1553B/Core_1553B.v \
				../vsrc/1553B/Top_1553B_APB.v \
				../vsrc/APBCores/APB_Slave_Interface.v \
				../vsrc/utilsM/vlog/fifo_simple.v \
				../vsrc/utilsM/vlog/reg_en.v \
				../vsrc/utilsM/vlog/reg_enrs.v \
				../vsrc/utilsM/vlog/reg_rs.v \
				../vsrc/axis_1553_decoder.v \
				../vsrc/axis_1553_encoder.v

TOP_MODEL := tb_1553_apb

all:
	@echo 'please set a target!'

comp_rtl_verilator:
	verilator $(VERILATOR_FLAGS) $(RTL_INCLUDE) -DVERILATOR_TB_DUMPFILE \
	-cc $(RTL_LIST_VLOG) $(RTL_LIST_VHDL) \
	--top-module $(TOP_MODEL) --Mdir ../obj_dir_$(TOP_MODEL) \
	--binary --prof-cfuncs -CFLAGS -DVL_DEBUG

run_rtl_verilator: comp_rtl_verilator
	$(MAKE) -C ../obj_dir_$(TOP_MODEL)/ -f V$(TOP_MODEL).mk V$(TOP_MODEL)
	../obj_dir_$(TOP_MODEL)/V$(TOP_MODEL)

comp_rtl_modoleSim:
	vsim -do sim_1553_apb.do
	