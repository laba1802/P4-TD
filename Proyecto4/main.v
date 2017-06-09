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
	 input reset,
	 output [6:0]SEG,
    output [3:0]AN,
    output DP
    );
	 
	 wire [7:0] first, second, third, fourth;
	 wire rx_done_tick, flag_receiver;
	 
	 /*
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
		//.clk(clk),
		.data_output(mem_output)
	 ); */
	 
	 reg CLK50MHZ=0; 	 
	 wire [31:0]keycode, number_reg;
	 
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
	 
	 regNumber numero(
		.clk(clk),
		.x(keycode),
		.flag(flag_receiver),
		.number(number_reg)
	);

	 seg7decimal sevenSeg (
		.x(number_reg),
		.clk(clk),
		.reset(reset),
		.seg(SEG[6:0]),
		.an(AN[3:0]),
		.dp(DP) 
		);

endmodule
