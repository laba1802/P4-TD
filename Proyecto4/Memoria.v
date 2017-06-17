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
	input mem_wd_NumberOne,
	input [31:0] numberOne,
	input mem_wd_NumberTwo,
	input [31:0] numberTwo,
	input mem_wd_Operation,
	input [31:0] operation,
	//input clk,
	input mem_rd_Result,
	output [31:0] data_output,
	output [31:0] result_output
	);
	
	reg [31:0] memRegFile [0:N];
	reg [5:0] index_rd, index_wd;
	reg [31:0] data_output_reg, result_output_reg;
	integer i;
	localparam N = 63;
	localparam initial_value = 32'h00400000;
	
	initial begin
		for(i = 0; i < N; i = i + 1) memRegFile[i] <= 32'b0;
		//memRegFile[1] <= 32'h00853022;
		//memRegFile[1] <= 32'h10AA0004;
		//memRegFile[1] <= 32'h14AA0004;
		//memRegFile[1] <= 32'h8DF00018; //lw
		//memRegFile[1] <= 32'hADE5001C; //sw
		//memRegFile[2] <= 32'h08100006;
		//memRegFile[6] <= 32'h00EAF820;
		//memRegFile[7] <= 32'h08100006;
		//memRegFile[6] <= 32'h00853022;
		//memRegFile[6] <= 32'h18020707;
		//memRegFile[1] <= 32'h8DEA0050;
		//memRegFile[2] <= 32'h8DEB0054;
		//memRegFile[3] <= 32'h014B6020;
		//memRegFile[4] <= 32'hADEC0058;
		//memRegFile[3] <= 32'd2703;
		memRegFile[3]  <= 32'h1; //lw
		memRegFile[4]  <= 32'h8DCF0008; //lw
		memRegFile[5]  <= 32'h8DD00000; //lw
		memRegFile[6]  <= 32'h8DD10004; //lw
		//memRegFile[7]  <= 32'h15E10028; //bne
		memRegFile[7]  <= 32'h02119020; //add
		memRegFile[8]  <= 32'hADD2000C; //sw
		memRegFile[9] <= 32'h08100004;//j
		//memRegFile[20] <= 32'd18;
		//memRegFile[21] <= 32'd7;
		
		data_output_reg = 0;
		index_rd = 0;
		index_wd = 0;
	end
	
	always @ *
	begin
		if(dir >= initial_value) index_wd = (dir - initial_value)/4;
		else index_wd = N;
		
		if(mem_wd) memRegFile[index_wd] <= data_input;
		
		if(mem_wd_NumberOne) memRegFile[0] <= numberOne;
		if(mem_wd_NumberTwo) memRegFile[1] <= numberTwo;
		if(mem_wd_Operation) memRegFile[2] <= operation;
	end
	
	always @ * begin
		if(dir >= initial_value) index_rd = (dir - initial_value)/4;
		
		if(mem_rd && dir >= initial_value) data_output_reg = memRegFile[index_rd];
		
	end
	
	always @ * begin
		if(mem_rd_Result) result_output_reg = memRegFile[3];
	end
	
	assign data_output = data_output_reg;
	assign result_output = result_output_reg;
	
endmodule
