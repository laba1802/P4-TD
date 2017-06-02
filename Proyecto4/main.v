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
	 input reset
    );
	 
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
		.clk(clk),
		.data_output(mem_output)
	 );

endmodule
