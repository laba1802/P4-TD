`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:56:32 05/24/2017 
// Design Name: 
// Module Name:    ExtensionSigno 
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
module ExtensionSigno(
    input [15:0] immediate,
    output [31:0] output_imm
    );
	 
	 assign output_imm = { {16{immediate[15]}}, immediate };

endmodule
