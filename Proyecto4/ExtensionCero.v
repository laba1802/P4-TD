`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:09:48 05/29/2017 
// Design Name: 
// Module Name:    ExtensionCero 
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
module ExtensionCero(
    input [15:0] immediate,
    output [31:0] output_imm
    );
	 
	 assign output_imm = { {16'h0000, immediate} };

endmodule
