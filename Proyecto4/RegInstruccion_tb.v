`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:27:17 05/24/2017
// Design Name:   RegInstruccion
// Module Name:   D:/FPGA/P4-TD/Proyecto4/RegInstruccion_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegInstruccion
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegInstruccion_tb;

	// Inputs
	reg [31:0] instruction;
	reg clk;
	reg ir_w;

	// Outputs
	wire [25:0] jumpAddress;
	wire [5:0] opcode;
	wire [5:0] funct;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [15:0] immediate;

	// Instantiate the Unit Under Test (UUT)
	RegInstruccion uut (
		.instruction(instruction), 
		.clk(clk), 
		.ir_w(ir_w), 
		.jumpAddress(jumpAddress), 
		.opcode(opcode), 
		.funct(funct), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.immediate(immediate)
	);
	
	initial begin
		// Initialize Inputs
		instruction = 0;
		clk = 1;
		ir_w = 0;

		// Wait 100 ns for global reset to finish
		#100;
      ir_w = 1;  
		// Add stimulus here
		instruction = 32'b00000000001100000000000000100000;
		
		#20;
		ir_w = 1; 
		instruction = 32'b00010000000000000000000000110000;
		
		//#20;
		//ir_w = 0;
		
		#40 $finish;
		
	end
	
	always begin
		#10  clk = ~clk; 
	end
      
endmodule

