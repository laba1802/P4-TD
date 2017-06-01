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
	output [31:0] data_output,
	wire [31:0] data_output
	);
	
	reg [31:0] memRegFile [512:0];
	always @ (posedge clk) 
	begin
		if(mem_wd==1'b1)
		begin
			memRegFile[dir] <= data_input;
		end
	end
	
	assign data_output = (mem_rd==1'b1)? memRegFile[dir] : 0;
	
endmodule
