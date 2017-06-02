`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:29:57 05/29/2017 
// Design Name: 
// Module Name:    Mux_OperA 
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
module Mux_OperA(
    input [31:0] input_number,
	 input [31:0] immediate_ext,
	 input [31:0] immediate_desp,
	 input [1:0] sel_operA,
    output [31:0] output_A
   );
	
	localparam mask4 = 32'h00000004;
	reg [31:0] output_reg;
	
	always @ (input_number or immediate_ext or immediate_desp or sel_operA)
	begin
		case (sel_operA)
			2'b00: output_reg = input_number;
			2'b01: output_reg = mask4;
			2'b10: output_reg = immediate_ext;
			2'b11: output_reg = immediate_desp;
		endcase
	end
	
	assign output_A = output_reg;
	
endmodule
