`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:37:47 05/24/2017 
// Design Name: 
// Module Name:    Desplazamiento_imm 
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
module Desplazamiento_imm(
    input [31:0] immediate,
    output [31:0] output_imm
    );

	assign output_imm = immediate << 2;

endmodule
