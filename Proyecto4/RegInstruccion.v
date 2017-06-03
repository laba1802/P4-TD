`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:12:56 05/24/2017 
// Design Name: 
// Module Name:    RegInstruccion 
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
module RegInstruccion(
    input [31:0] instruction,
    input clk,
    input ir_w,
    output [25:0] jumpAddress,
    output [5:0] opcode,
    output [5:0] funct,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [15:0] immediate
    );
	 
	 localparam [1:0] type_R = 2'b00, type_I = 2'b01, type_J = 2'b10;
	 
	 reg [25:0] jumpAddress_reg;
	 reg [5:0] opcode_reg, funct_reg;
	 reg [4:0] rs_reg, rt_reg, rd_reg;
	 reg [15:0] immediate_reg;
	 reg [1:0] type_opcode;
	 reg [31:0] instruction_reg, instruction_next;
	 wire [31:0] inst;
	 
	 initial begin
		jumpAddress_reg = 0;
		opcode_reg 		 = 0;
		funct_reg 		 = 0;
		rs_reg 			 = 0;
		rt_reg 			 = 0;
		rd_reg 			 = 0;
		immediate_reg 	 = 0;
	 end
	 
	 
	 always @ (negedge clk) begin
		if(ir_w)  
			begin
				opcode_reg 		 <= instruction[31:26];
				jumpAddress_reg <= instruction[25:0];
				rs_reg    		 <= instruction[25:21];
				rt_reg    		 <= instruction[20:16];
				rd_reg    		 <= instruction[15:11];
				funct_reg 		 <= instruction[5:0];
				immediate_reg 	 <= instruction[15:0];	
			end
	 end
	 
	 
	 assign jumpAddress = jumpAddress_reg; 
	 assign opcode      = opcode_reg; 	
	 assign funct       = funct_reg;
	 assign rs          = rs_reg;
	 assign rt          = rt_reg;
	 assign rd          = rd_reg;
	 assign immediate   = immediate_reg;
	 

endmodule
