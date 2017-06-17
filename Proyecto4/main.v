`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:51 05/24/2017 
// Design Name: 
// Module Name:    main 
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
module main(
	 input clk,
	 input kclk,
	 input kdata,
	 //input [31:0] keycode,
	 input reset,
	 output [6:0]SEG,
    output [3:0]AN,
    output DP
    );
	 
	 wire flag_receiver, mem_wr_NumberOne, flag_enter, flag_Operation, mem_wr_Product, mem_wr_NumberTwo,
			flagNumberOne, flagNumberTwo, flagProduct, mem_rd_result;
	 reg CLK50MHZ=0; 	 
	 wire [31:0]keycode, numberOne, productBCD, operation, output_numberBCD, output_muxBCD, numberTwo, resultMemory;
	 
	 
	 ///////////////SALIDA DE COMPONENTES/////////////
	 
	 wire [31:0] mem_output, memDir, memDato;
	 wire mem_wd, mem_rd;
	 ///////////////LLAMADO DE FUNCIONES//////////////
	 
	 MIPS micro(
		.clk(clk),
		.reset(reset),
		.memOutput(mem_output),
		.memDir(memDir),
		.memDato(memDato),
		.mem_wd(mem_wd),
		.mem_rd(mem_rd)
	 );
	 
	 Memoria mem(
		.dir(memDir),
		.data_input(memDato),
		.mem_rd(mem_rd),
		.mem_wd(mem_wd),
		.mem_wd_NumberOne(mem_wr_NumberOne),
		.numberOne(numberOne),
		.mem_wd_NumberTwo(mem_wr_NumberTwo),
		.numberTwo(numberTwo),
		.mem_wd_Operation(mem_wr_Product),
		.operation(operation),
		//.clk(clk),
		.mem_rd_Result(mem_rd_result),
		.data_output(mem_output),
		.result_output(resultMemory)
	 );
	 
	 
	 always @(posedge(clk))begin
			 CLK50MHZ<=~CLK50MHZ;
		end

	keyboard_receiver keyboard (
		.clk(CLK50MHZ),
		.kclk(kclk),
		.kdata(kdata),
		.keycodeout(keycode[31:0]),
		.flag_output(flag_receiver)
	 );
 
	 
	 //wire [31:0] numberOne;
	 regNumber numeroUno(
		.clk(clk),
		.x(keycode),
		.flag(flag_receiver),
		.flag_output(flagNumberOne),
		.mem_wr(mem_wr_NumberOne),
		.number(numberOne)
	);
	
	
	regProduct operacion(
		.clk(clk),
		.x(keycode),
		.flag(flag_receiver),
		.flag_numberOne(flagNumberOne),
		.flag_output(flagProduct),
		.mem_wr(mem_wr_Product),
		.numberBCD(productBCD),
		.operation(operation)
	);
	
	regNumberTwo numeroDos(
		.clk(clk),
		.x(keycode),
		.flag(flag_receiver),
		.flag_operation(flagProduct),
		.flag_output(flagNumberTwo),
		.mem_wr(mem_wr_NumberTwo),
		.number(numberTwo)
	);
	
	regEnter enter(
		.clk(clk),
		.x(keycode),
		.flag(flag_receiver),
		.flag_enter(flag_enter),
		.mem_rd(mem_rd_result)
	);


		
	muxBCD muxBCD_unit(
		.numberOne(numberOne),
		.numberTwo(numberTwo),
		.operation(productBCD),
		.memoryInput(resultMemory),
		.flag_NumberOne(flagNumberOne),
		.flag_NumberTwo(flagNumberTwo),
		.flag_Operation(flagProduct),
		.flag_Enter(flag_enter),
		.output_flag_Operation(flag_Operation),
		.outputNumber(output_muxBCD)
	);
	

	
	BCD bcd_unit(
		.binary(output_muxBCD),
		.flag(flag_Operation),
		.output_bcd(output_numberBCD)
	);

	 seg7decimal sevenSeg (
		.x(output_numberBCD),
		.clk(clk),
		.reset(reset),
		.seg(SEG[6:0]),
		.an(AN[3:0]),
		.dp(DP) 
		);

endmodule 