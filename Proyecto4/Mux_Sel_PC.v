`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:37 05/29/2017 
// Design Name: 
// Module Name:    Mux_Sel_PC 
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
module Mux_Sel_PC(
    input [31:0] output_ALU,
    input [31:0] output_reg,
    input [31:0] output_concat,
    input [1:0] sel_pc,
    output [31:0] output_sel_pc
    );
	
	reg [31:0] output_sel_pc_reg; 
	
	
	always @ (output_ALU or output_reg or output_concat or sel_pc)
	begin
		case (sel_pc)
			2'b00: output_sel_pc_reg = output_ALU;
			2'b01: output_sel_pc_reg = output_reg;
			2'b10: output_sel_pc_reg = output_concat;
		endcase
	end
	
	assign output_sel_pc = output_sel_pc_reg;
	
endmodule
