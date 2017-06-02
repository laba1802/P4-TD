`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:21:14 05/30/2017 
// Design Name: 
// Module Name:    RegPC 
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
module RegPC(
	input [31:0] pc_in,
	input pc_ld,
	input clk,
	output [31:0] pc_out
   );
	
	reg [31:0] pc_reg;
	
	initial begin
		pc_reg = 32'h400000;
	end
	
	always @ (negedge clk) begin
		if(pc_ld) pc_reg = pc_in;
	end
	 
	assign pc_out = pc_reg;
	
endmodule
