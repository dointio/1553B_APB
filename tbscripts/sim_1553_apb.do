################################# delete old worklib ##################################
# transcript on
# if {[file exists work_1553_apb]} {
# 	vdel -lib work_1553_apb -all
# }
################################# create work #########################################
vlib ../work_1553_apb
vmap work ../work_1553_apb
################################# comp own model ######################################
# verilog example:
# vlog ../src/IP_Cores/UartCores/uart_RXDataControl.v
# systemc example:
# sccom ../src/ScTb.cpp
# sccom -link
vlog ../vtb/tb_1553_apb.v
vlog ../vsrc/1553B/Core_1553B.v
vlog ../vsrc/1553B/Top_1553B_APB.v
vlog ../vsrc/APBCores/APB_Slave_Interface.v +incdir+../vsrc/inc
vlog ../vsrc/utilsM/vlog/fifo_simple.v
vlog ../vsrc/utilsM/vlog/reg_en.v
vlog ../vsrc/utilsM/vlog/reg_enrs.v
vlog ../vsrc/utilsM/vlog/reg_rs.v
vlog ../vsrc/axis_1553_decoder.v
vlog ../vsrc/axis_1553_encoder.v

############################### start sim ##############################################
# simple_example(no ext ip):
# vsim -novopt -gui work.xxxxxxx_tb
vsim -voptargs=+acc work.tb_1553_apb

################################# add wave #############################################
add wave *
################################ run ###################################################
run 5us

