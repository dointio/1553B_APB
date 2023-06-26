
all:
	@echo 'please set a target!'

comp_rtl:
	verilator $(VERILATOR_FLAGS) $(RTL_INCLUDE) -DVERILATOR_TB_DUMPFILE -cc $(RTL_LIST_VLOG) ./vsrc/tb/$(TOP_MODEL).sv \
	$(RTL_LIST_VHDL) --top-module $(TOP_MODEL) --Mdir obj_dir_$(TOP_MODEL) --binary --prof-cfuncs -CFLAGS -DVL_DEBUG

run_rtl: comp_rtl
	@$(MAKE) -C ./obj_dir_$(TOP_MODEL)/ -f V$(TOP_MODEL).mk V$(TOP_MODEL)
	./obj_dir_new_rtl/V$(TOP_MODEL)