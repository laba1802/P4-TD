`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:41:00 05/26/2017
// Design Name:   alu
// Module Name:   D:/FPGA/P4-TD/Proyecto4/alu_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [3:0] operB;
	reg [3:0] operA;
	reg [2:0] alu_fun;

	// Outputs
	wire carry;
	wire zero;
	wire negative;
	wire [3:0] result;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.operB(operB), 
		.operA(operA), 
		.alu_fun(alu_fun), 
		.carry(carry), 
		.zero(zero),
		.negative(negative),
		.result(result)
	);

	initial begin
		// Initialize Inputs
		operB = 0;
		operA = 0;
		alu_fun = 0;

		// Wait 100 ns for global reset to finish
		#100;
      operB = 4'd1;
		operA = 4'd1;
		alu_fun = 3'd1;
		// Add stimulus here
		#10;
		operB = 4'd0;
		operA = 4'd0;
		
		#10;
		operB = 4'd15;
		operA = 4'd15;
		
		#10;
		operB = 4'd8;
		operA = 4'd8;
		
		#10;
		operB = 4'd2;
		operA = 4'd4;
		
		#10;
		alu_fun = 3'd2;
		operB = 4'd1;
		operA = 4'd1;
		
		#10;
		operB = 4'd10;
		operA = 4'd1;
		
		#10;
		operB = 4'd3;
		operA = 4'd10;
		
		#10;
		alu_fun = 3'd3;
		operB = 4'd1;
		
		#10;
		operB = 4'd10;
		
		#10;
		alu_fun = 3'd4;
		operB = 4'd10;
		operA = 4'd5;

		#10;
		operB = 4'd1;
		operA = 4'd1;
		
		#10;
		alu_fun = 3'd5;
		operB = 4'd10;
		operA = 4'd5;

		#10;
		operB = 4'd1;
		operA = 4'd1;
		
		#10;
		alu_fun = 3'd6;
		operB = 4'd10;
		operA = 4'd5;

		#10;
		operB = 4'd1;
		operA = 4'd1;
		
		#10 $finish;
	end
      
endmodule

