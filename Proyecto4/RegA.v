`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:27 05/30/2017 
// Design Name: 
// Module Name:    RegAB 
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
module RegAB(
	input [31:0] data_input,
	input clk,
	input reset,
	output data_output
    );
	 
	always @ (posedge clk)
	begin
		if(Reset)
			data_output <= 0;
		else
			data_output <= data_input;
	end

endmodule
