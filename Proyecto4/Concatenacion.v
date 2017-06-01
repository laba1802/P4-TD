`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:49:47 05/29/2017 
// Design Name: 
// Module Name:    Concatenacion 
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
module Concatenacion(
    input [27:0] output_jump,
    input [31:0] PC,
    output [31:0] output_concat
    );
	
	assign output_concat = { PC[31:28], output_jump }; 
	
endmodule
