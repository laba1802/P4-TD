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
	 reg [31:0] instruction_reg;
	 
	 initial begin
		jumpAddress_reg = 0;
		opcode_reg 		 = 0;
		funct_reg 		 = 0;
		rs_reg 			 = 0;
		rt_reg 			 = 0;
		rd_reg 			 = 0;
		immediate_reg 	 = 0;
	 end

	 always @ (posedge clk) begin
		if(ir_w)  
			begin
				instruction_reg <= instruction;
				
				case(instruction_reg[31:26])
					6'h0:  type_opcode = type_R; // Tipo R
					6'h4:  type_opcode = type_I; // beq
					6'h5:  type_opcode = type_I; // bne
					6'h2:  type_opcode = type_J; // j
					6'h23: type_opcode = type_I; // lw
					6'h2b: type_opcode = type_I; // sw
				endcase
				
				case(type_opcode)
					type_R: begin
									opcode_reg 		 = instruction_reg[31:26];
									jumpAddress_reg = 0;
									rs_reg    		 = instruction_reg[25:21];
									rt_reg    		 = instruction_reg[20:16];
									rd_reg    		 = instruction_reg[15:11];
									funct_reg 		 = instruction_reg[5:0];
									immediate_reg 	 = 0;
							  end
					type_I: begin
									opcode_reg 		 = instruction_reg[31:26];
									jumpAddress_reg = 0;
									funct_reg 		 = 0;
									rs_reg        	 = instruction_reg[25:21];
									rt_reg        	 = instruction_reg[20:16];
									rd_reg 			 = 0;
									immediate_reg 	 = instruction_reg[15:0];
							  end
					type_J: begin
									opcode_reg 		 = instruction_reg[31:26];
									jumpAddress_reg = instruction_reg[25:0];
									opcode_reg 		 = 0;
									funct_reg 		 = 0;
									rs_reg 			 = 0;
									rt_reg 			 = 0;
									rd_reg 			 = 0;
									immediate_reg 	 = 0;
							  end
				endcase	
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
