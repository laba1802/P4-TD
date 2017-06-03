`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:22:47 06/01/2017
// Design Name:   MIPS
// Module Name:   D:/FPGA/P4-TD/Proyecto4/MIPS_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] memOutput;
	
	// Outputs
	wire [31:0] memDir;
	wire [31:0] memDato;
	wire mem_wd;
	wire mem_rd;
	
	

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clk(clk), 
		.reset(reset),
		.memOutput(memOutput),
		.memDir(memDir),
		.memDato(memDato),
		.mem_wd(mem_wd),
		.mem_rd(mem_rd)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 1;
		#1;
		reset = 0;
        
		// Add stimulus here
		#400 $finish;
	end
	
	always begin
		#10  clk = ~clk; 
	end
      
endmodule

