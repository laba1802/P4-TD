`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:38 05/26/2017 
// Design Name: 
// Module Name:    BancoRegistros 
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
module BancoRegistros(
    input clk,
    input [4:0] dir_a,
    input [4:0] dir_b,
    input [4:0] dir_wra,
    input [31:0] di,
    input reg_rd,
    input reg_wr,
    output [31:0] doa,
    output [31:0] dob
    );
	 
	 reg [31:0] registers [0:31];
	 reg [31:0] doa_reg, dob_reg;
	 
	 integer i;
	 initial begin
		for(i = 0; i < 32; i = i + 1) registers[i] <= 32'b0;
		registers[0] <= 32'd0;
		registers[1] <= 32'd1;
		registers[2] <= 32'd2;
		registers[3] <= 32'd3;
		registers[4] <= 32'd4;
		registers[5] <= 32'd5;
		registers[6] <= 32'd6;
		registers[7] <= 32'd7;
		registers[8] <= 32'd8;
		registers[9] <= 32'd9;
		registers[10] <= 32'd10;
		registers[11] <= 32'd11;
		registers[12] <= 32'd12;
		registers[13] <= 32'd13;
		registers[14] <= 32'h400000;
		doa_reg = 32'b0;
		dob_reg = 32'b0;
	 end

	always @ (posedge clk) begin
		if(reg_wr) registers[dir_wra] <= di;		
	end
	
	always @ (negedge clk) begin
		if(reg_rd) begin
			doa_reg = registers[dir_a];
			dob_reg = registers[dir_b];
		end
	end
	
	assign doa = doa_reg;
	assign dob = dob_reg;

endmodule
