`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:25:08 05/31/2017 
// Design Name: 
// Module Name:    RegB 
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
module RegB(
	input [31:0] data_input,
	input clk,
	output [31:0] data_output
   );
	
	reg [31:0] data_output_reg;
	
	initial begin
		data_output_reg = 0;
	end
	
	always @ (posedge clk)
	begin
		data_output_reg = data_input;
	end
	
	assign data_output = data_output_reg;

endmodule
