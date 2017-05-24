`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:25:13 05/24/2017 
// Design Name: 
// Module Name:    Mux_Sel_Dest 
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
module Mux_Sel_Dest(
    input [4:0] rt,
    input [4:0] rd,
    input sel_dest,
    output [4:0] output_dir
    );

	assign output_dir = (sel_dest) ? rd : rt;

endmodule
