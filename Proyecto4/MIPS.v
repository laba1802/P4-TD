`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:40:22 06/01/2017 
// Design Name: 
// Module Name:    MIPS 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MIPS(
    input clk,
	 input reset,
	 input [31:0] memOutput,
	 output [31:0] memDir,
	 output [31:0] memDato,
	 output mem_wd,
	 output mem_rd
    );
	 
	 ///////////////ESTADOS///////////////////////////
	 localparam [2:0] 
		fetch = 3'd0,
		deco  = 3'd1,
		exe 	= 3'd2,
		mem	= 3'd3,
		wb		= 3'd4;
		
	 reg [2:0] state_reg, state_next;	
	
	 ///////////////FLAGS DE COMPONENTES//////////////
	 
	 reg pc_ld, ir_w, reg_rd, reg_wr, mem_wd_reg, mem_rd_reg;
	 
	 reg sel_dir, sel_dest, sel_dat, sel_operB;
	 reg [1:0] sel_pc, sel_operA;
	 reg [2:0] alu_fun;
	 
	 ///////////////SALIDA DE COMPONENTES/////////////
	 
	 wire [31:0] pc_out, muxSelDir_out, output_sel_pc, output_operA, output_operB, result_alu, 
					extCero_out, extSign_out, regA_out, regB_out, despImm_out, conc_out, 
					banRegA_out, banRegB_out, regALU_out, muxSelDat_out, regMem_out;
	 wire [25:0] jumpAddress;
	 wire [27:0] despAddr_out;
	 wire [5:0] opcode, funct;
	 wire [4:0] rs, rt, rd, muxSelDest_out;
	 wire [15:0] immediate;
	 wire carry_alu, zero_alu, negative_alu;
	 
	 ///////////////INICIALIZACION DE BANDERAS////////
	 
	 initial begin
		pc_ld 	  = 0;
		ir_w 		  = 0;
		reg_rd 	  = 0;
		reg_wr 	  = 0;
		sel_dir 	  = 0;
		sel_dest   = 0;
		sel_dat 	  = 0;
		sel_operB  = 0;
		sel_pc 	  = 0;
		sel_operA  = 0;
		alu_fun 	  = 0;
		mem_wd_reg = 0;
		mem_rd_reg = 0;
	 end
	  
	 ///////////////LLAMADO DE FUNCIONES//////////////
	 
	 //Fetch
	 RegPC regPC_unit(
		.pc_in(output_sel_pc),
		.pc_ld(pc_ld),
		.clk(clk),
		.pc_out(pc_out)
	 );
	 
	Mux_Sel_Dir muxSelDir(
		.pc(pc_out),
		.direction(regALU_out),
		.sel_dir(sel_dir),
		.output_dir(memDir)
	 );
	 
	 RegInstruccion regInst_unit(
		.instruction(memOutput),
		.clk(clk),
		.ir_w(ir_w),
		.jumpAddress(jumpAddress),
		.opcode(opcode),
		.funct(funct),
		.rs(rs),
		.rt(rt),
		.rd(rd),
		.immediate(immediate)
	 );
	 
	 Mux_Sel_PC muxSelPC(
		.output_ALU(result_alu),
		.output_reg(regALU_out),
		.output_concat(conc_out),
		.sel_pc(sel_pc),
		.output_sel_pc(output_sel_pc)
	 );
	 
	 Mux_OperA muxOperA(
		.input_number(regB_out),
		.immediate_ext(extSign_out),
		.immediate_desp(despImm_out),
		.sel_operA(sel_operA),
		.output_A(output_operA)
	 );
	 
	 Mux_OperB muxOperB(
		.pc(pc_out),
		.input_number(regA_out),
		.sel_operb(sel_operB),
		.output_Y(output_operB)
	 );
	 
	 alu alu_unit(
		.operB(output_operA),
		.operA(output_operB),
		.alu_fun(alu_fun),
		.carry(carry_alu),
		.zero(zero_alu),
		.negative(negative_alu),
		.result(result_alu)
	 );
	 
	 //Deco
	 Mux_Sel_Dest muxSelDest(
		.rt(rt),
		.rd(rd),
		.sel_dest(sel_dest),
		.output_dir(muxSelDest_out)
	 );
	 
	 ExtensionCero extCeero(
		.immediate(immediate),
		.output_imm(extCero_out)
	 );
	 
	 ExtensionSigno extSign(
		.immediate(immediate),
		.output_imm(extSign_out)
	 );
	 
	 RegA regiA(
		.data_input(banRegA_out),
		.clk(clk),
		.data_output(regA_out)
	 );
	 
	 RegB regiB(
		.data_input(banRegB_out),
		.clk(clk),
		.data_output(regB_out)
	 );
	 
	 Desplazamiento_imm despImm(
		.immediate(extSign_out),
		.output_imm(despImm_out)
	 );
	 
	 Desplazamiento_jumpAddress despAddr(
		.jumpAddress(jumpAddress),
		.output_jump(despAddr_out)
	 );
	 
	 Concatenacion conc(
		.output_jump(despAddr_out),
		.PC(pc_out),
		.output_concat(conc_out)
	 );
	 
	 BancoRegistros banReg(
		.clk(clk),
		.dir_a(rs),
		.dir_b(rt),
		.dir_wra(muxSelDest_out),
		.di(muxSelDat_out),
		.reg_rd(reg_rd),
		.reg_wr(reg_wr),
		.doa(banRegA_out),
		.dob(banRegB_out)
	 );
	 
	 //Exe
	 RegALU regiALU(
		.data_input(result_alu),
		.clk(clk),
		.data_output(regALU_out)
	 );
	 
	 //Mem
	 RegMemoria regiMem(
		.data_input(memOutput),
		.clk(clk),
		.data_output(regMem_out)
	 );
	 
	 //WB
	 Mux_Sel_Dat muxSelDat(
		.output_reg_ALU(regALU_out),
		.output_reg_mem(regMem_out),
		.sel_dat(sel_dat),
		.output_Y(muxSelDat_out)
	 );
	 
	 
	 ///////////////MAQUINA DE ESTADOS////////////////
	 
	 always @(posedge clk, posedge reset) begin
       if (reset) state_reg <= fetch;
       else state_reg <= state_next;
	 end
			 
			 
	 always @ * begin
		state_next = state_reg;
		case(state_reg)
			fetch: begin
						state_next = deco;						
						//Flags
						pc_ld 	  = 1;
						sel_dir 	  = 0;
						mem_wd_reg = 0;
						mem_rd_reg = 1;
						ir_w 		  = 1;
						sel_dest   = 0;
						sel_dat 	  = 0;
						reg_rd 	  = 0;
						reg_wr 	  = 0;
						sel_operB  = 0;
						sel_operA  = 1;
						alu_fun 	  = 2'd1;
						sel_pc 	  = 0;
					 end
			deco: begin
						if(opcode == 6'h2) begin
							sel_pc = 2'd2;
							pc_ld 	  = 1;
							state_next = fetch;
						end
						else begin
							sel_pc = 0;
							pc_ld 	  = 0;
							state_next = exe;
						end
						
							
						//Flags
						sel_dir 	  = 0;
						mem_wd_reg = 0;
						mem_rd_reg = 0;
						ir_w 		  = 0;
						sel_dest   = 0;
						sel_dat 	  = 0;
						reg_rd 	  = 1;
						reg_wr 	  = 0;
						sel_operB  = 0;
						sel_operA  = 0;
						alu_fun 	  = 2'd1;
						
						
					end
			exe: begin
						case(opcode)
							6'h0: begin
										state_next = wb;
										sel_operB  = 1;
										sel_operA  = 0;
										pc_ld 	  = 0;
										case(funct)
											6'h20: alu_fun = 3'd1; // add
											6'h24: alu_fun = 3'd4; // and
											6'h27: alu_fun = 3'd3; // nor
											6'h25: alu_fun = 3'd5; // or
											6'h22: alu_fun = 3'd2; //sub
										endcase
									end
							6'h4: begin  //beq
										if(regA_out == regA_out) begin
											sel_operB  = 0;
											sel_operA  = 2'd3;
											pc_ld 	  = 1;
										end
										else pc_ld 	  = 0;
										state_next = fetch;
									end
							6'h5: begin  //bne
										if(regA_out != regA_out) begin
											sel_operB  = 0;
											sel_operA  = 2'd3;
											pc_ld 	  = 1;
										end
										else pc_ld 	  = 0;
										state_next = fetch;
									end
							6'h23: begin  //lw
										state_next = mem;
										sel_operB  = 1;
										sel_operA  = 2'd2;
										alu_fun 	  = 2'd1;
										pc_ld 	  = 0;
									end
							6'h2B: begin  //sw
										state_next = mem;
										sel_operB  = 1;
										sel_operA  = 2'd2;
										alu_fun 	  = 2'd1;
										pc_ld 	  = 0;
									end
						endcase
						
						//Flags
						sel_dir 	  = 0;
						mem_wd_reg = 0;
						mem_rd_reg = 0;
						ir_w 		  = 0;
						sel_dest   = 0;
						sel_dat 	  = 0;
						reg_rd 	  = 0;
						reg_wr 	  = 0;
						sel_pc 	  = 0;
						
				  end
			mem: begin
						case(opcode)
							6'h23: begin  //lw
										state_next = wb;
										sel_dir 	  = 1;
										mem_rd_reg = 1;
										mem_wd_reg = 0;
										sel_operB  = 1;
										sel_operA  = 2'd2;
										alu_fun 	  = 2'd1;
									end
							6'h2B: begin  //sw
										state_next = fetch;
										sel_dir 	  = 1;
										sel_operB  = 1;
										sel_operA  = 2'd2;
										alu_fun 	  = 2'd1;
										mem_rd_reg = 0;
										mem_wd_reg = 1;
									end
						endcase
						
						//Flags
						pc_ld 	  = 0;
						ir_w 		  = 0;
						sel_dest   = 0;
						sel_dat 	  = 0;
						reg_rd 	  = 0;
						reg_wr 	  = 0;
						sel_pc 	  = 0;
											
				  end
			wb: begin
						state_next = fetch;
						
						if(opcode == 6'h23) begin
							sel_dat 	  = 1;
							sel_dir 	  = 1;
							sel_dest   = 0;
							reg_wr 	  = 1;
							sel_operB  = 0;
							sel_operA  = 0;
							alu_fun = 3'd1;
						end else begin
							sel_dat 	  = 0;
							sel_dir 	  = 0;
							sel_dest   = 1;
							reg_wr 	  = 1;
							sel_operB  = 1;
							sel_operA  = 0;
							case(funct)
								6'h20: alu_fun = 3'd1; // add
								6'h24: alu_fun = 3'd4; // and
								6'h27: alu_fun = 3'd3; // nor
								6'h25: alu_fun = 3'd5; // or
								6'h22: alu_fun = 3'd2; //sub
							endcase
						end
						
						//Flags
						pc_ld 	  = 0;
						mem_wd_reg = 0;
						mem_rd_reg = 0;
						ir_w 		  = 0;
						reg_rd 	  = 0;
						sel_pc 	  = 0;
				 end
		endcase
	 end
	 
	 assign mem_rd  = mem_rd_reg;
	 assign memDato = regB_out;
	 assign mem_wd  = mem_wd_reg;
	 
	 

endmodule
