`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:07:47 05/30/2017 
// Design Name: 
// Module Name:    Memoria 
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
module Memoria(
	input [31:0] dir, 
	input [31:0] data_input,
	input mem_rd, 
	input mem_wd, 
	input clk,
	output [31:0] data_output
	);
	
	reg [31:0] memRegFile [0:N];
	reg [5:0] index_rd, index_wd;
	reg [31:0] data_output_reg;
	integer i;
	localparam N = 63;
	localparam initial_value = 32'h00400000;
	
	initial begin
		for(i = 0; i < N; i = i + 1) memRegFile[i] <= 32'b0;
		//memRegFile[1] <= 32'h00853022;
		//memRegFile[1] <= 32'h10AA0004;
		memRegFile[1] <= 32'h14AA0004;
		//memRegFile[2] <= 32'h08100006;
		//memRegFile[6] <= 32'h00EAF820;
		//memRegFile[7] <= 32'h08100006;
		memRegFile[6] <= 32'h00853022;
		
		data_output_reg = 0;
		index_rd = 0;
		index_wd = 0;
	end
	
	always @ *
	begin
		if(dir >= initial_value) index_wd = (dir - initial_value)/4;
		else index_wd = N;
		
		if(mem_wd) memRegFile[index_wd] <= data_input;
	end
	
	always @ * begin
		if(dir >= initial_value) index_rd = (dir - initial_value)/4;
		
		if(mem_rd && dir >= initial_value) data_output_reg = memRegFile[index_rd];
		
	end
	
	assign data_output = data_output_reg;
	
endmodule
