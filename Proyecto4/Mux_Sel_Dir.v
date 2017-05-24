`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:03:41 05/24/2017 
// Design Name: 
// Module Name:    Mux_Sel_Dir 
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
module Mux_Sel_Dir(
    input [31:0] pc,
    input [31:0] direction,
    input sel_dir,
    output [31:0] output_dir
    );
	 
	 assign output_dir = (sel_dir) ? direction : pc;

endmodule
