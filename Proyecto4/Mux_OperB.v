`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:43:34 05/24/2017 
// Design Name: 
// Module Name:    Mux_OperB 
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
module Mux_OperB(
    input [31:0] pc,
    input [31:0] input_number,
	 input sel_operb,
    output [31:0] output_Y
    );
	
	 assign output_Y = (sel_operb) ? input_number : pc;

endmodule
