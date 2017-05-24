`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:48:49 05/24/2017 
// Design Name: 
// Module Name:    Desplazamiento_jumpAddress 
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
module Desplazamiento_jumpAddress(
    input [25:0] jumpAddress,
    output [27:0] output_jump
    );

	assign output_jump = jumpAddress << 2;

endmodule
