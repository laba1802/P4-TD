`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:54:18 06/09/2017 
// Design Name: 
// Module Name:    muxBCD 
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
module muxBCD(
    input [31:0] numberOne,
    input [31:0] numberTwo,
    input [31:0] operation,
    input [31:0] memoryInput,
    input flag_NumberOne,
    input flag_NumberTwo,
    input flag_Operation,
	 input flag_Enter,
	 output output_flag_Operation,
    output [31:0] outputNumber
    );
	
	reg [31:0] outputNumber_reg;
	reg flag_Operation_reg;
	
	always @ (*) begin
		if(flag_Enter) outputNumber_reg = memoryInput;
		else if(~flag_NumberOne) outputNumber_reg = numberOne;
		else if(~flag_Operation) outputNumber_reg = operation;		
		else if(~flag_NumberTwo) outputNumber_reg = numberTwo;
		else outputNumber_reg = memoryInput;
	end
	
	always @ (*) begin
		if(flag_NumberOne && ~flag_Operation) flag_Operation_reg = 1;
		else flag_Operation_reg = 0;
	end
	
	assign outputNumber = outputNumber_reg;
	assign output_flag_Operation = flag_Operation_reg;

endmodule
