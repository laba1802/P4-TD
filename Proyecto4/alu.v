`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:38:43 05/26/2017 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [N:0] operB,
    input [N:0] operA,
    input [2:0] alu_fun,
    output carry,
    output zero,
	 output negative,
	 output [N:0] result
    );
	 
	 localparam N = 31;
	 localparam [2:0] op_add = 3'd1, op_sub = 3'd2, op_not = 3'd3, op_and = 3'd4, op_or = 3'd5, op_xor = 3'd6; 
	 reg [N+1:0] result_reg;
	 reg flag_carry, flag_zero, flag_negative;
	 	 
	 always @ (*) begin
	 
		case(alu_fun)
			op_add: result_reg = operB + operA;
			op_sub: result_reg = operB - operA;
			op_not: result_reg = ~operB;
			op_and: result_reg = operB & operA;
			op_or:  result_reg = operB | operA;					  
			op_xor: result_reg = operB ^ operA;  
			default: result_reg = 0;
		endcase
		
		if(alu_fun == op_sub && operB < operA) flag_negative = 1;
		else flag_negative = 0;
		
		if (result_reg[N+1] == 1) flag_carry = 1;
		else flag_carry = 0;
		
		if (result_reg == 0) flag_zero = 1;
		else flag_zero = 0;
	 end
	 
	 assign result = result_reg[N:0];
	 assign carry = flag_carry;
	 assign zero = flag_zero;
	 assign negative = flag_negative;

endmodule
