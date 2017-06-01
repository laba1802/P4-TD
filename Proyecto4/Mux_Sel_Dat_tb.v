`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:02:09 05/31/2017
// Design Name:   Mux_Sel_Dat
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Mux_Sel_Dat_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_Sel_Dat
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_Sel_Dat_tb;

	// Inputs
	reg [31:0] output_reg_ALU;
	reg [31:0] output_reg_mem;
	reg sel_dat;

	// Outputs
	wire [31:0] output_Y;

	// Instantiate the Unit Under Test (UUT)
	Mux_Sel_Dat uut (
		.output_reg_ALU(output_reg_ALU), 
		.output_reg_mem(output_reg_mem), 
		.sel_dat(sel_dat), 
		.output_Y(output_Y)
	);

	initial begin
		// Initialize Inputs
		output_reg_ALU = 0;
		output_reg_mem = 0;
		sel_dat = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		output_reg_ALU = 32'hAAAAAAAA;
		output_reg_mem = 32'hBBBBBBBB;
		
		#10;
		sel_dat = 1;
		
		#10;
		sel_dat = 0;
		
		#10 $finish;

	end
      
endmodule

