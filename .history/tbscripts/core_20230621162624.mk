
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

RTL_LIST_VLOG := ../vsrc/axis_1553_core.v \ 
				../vsrc/axis_1553_decoder.v \
				../vsrc/axis_1553_encoder.v \
				../vsrc/util_axis_1553_string_decoder.v \
				../vsrc/util_axis_1553_string_encoder.v \
				../vsrc/util_axis_char_to_string_converter.v \
				../vsrc/util_axis_data_width_converter.v \
				../vsrc/util_axis_tiny_fifo.v \
				../vsrc/fifo/util_fifo_ctrl.v \
				../vsrc/fifo/util_fifo_mem.v \
				../vsrc/fifo/util_fifo_pipe.v \
				../vsrc/fifo/util_fifo.v \
				../vtb/tb_1553_decoder.v

TOP_MODEL := tb_1553_decoder

all:
	@echo 'please set a target!'

comp_rtl:
	verilator $(VERILATOR_FLAGS) $(RTL_INCLUDE) -DVERILATOR_TB_DUMPFILE \
	-cc $(RTL_LIST_VLOG) $(RTL_LIST_VHDL) \
	--top-module $(TOP_MODEL) --Mdir ../obj_dir_$(TOP_MODEL) \
	--binary --prof-cfuncs -CFLAGS -DVL_DEBUG

run_rtl: comp_rtl
	$(MAKE) -C ../obj_dir_$(TOP_MODEL)/ -f V$(TOP_MODEL).mk V$(TOP_MODEL)
	../obj_dir_$(TOP_MODEL)/V$(TOP_MODEL)