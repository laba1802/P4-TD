`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:35:20 05/31/2017
// Design Name:   Mux_Sel_PC
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Mux_Sel_PC_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_Sel_PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_Sel_PC_tb;

	// Inputs
	reg [31:0] output_ALU;
	reg [31:0] output_reg;
	reg [31:0] output_concat;
	reg [1:0] sel_pc;

	// Outputs
	wire [31:0] output_sel_pc;

	// Instantiate the Unit Under Test (UUT)
	Mux_Sel_PC uut (
		.output_ALU(output_ALU), 
		.output_reg(output_reg), 
		.output_concat(output_concat), 
		.sel_pc(sel_pc), 
		.output_sel_pc(output_sel_pc)
	);

	initial begin
		// Initialize Inputs
		output_ALU = 0;
		output_reg = 0;
		output_concat = 0;
		sel_pc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		output_ALU = 1;
		output_reg = 2;
		output_concat = 3;
		
		#10;
		sel_pc = 1;
		
		#10;
		sel_pc = 2;
		
		#10 $finish;
	end
      
endmodule

