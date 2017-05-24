`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:17:13 05/24/2017
// Design Name:   Mux_Sel_Dir
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Mux_Sel_Dir_rb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_Sel_Dir
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_Sel_Dir_rb;

	// Inputs
	reg [31:0] pc;
	reg [31:0] direction;
	reg sel_dir;

	// Outputs
	wire [31:0] output_dir;

	// Instantiate the Unit Under Test (UUT)
	Mux_Sel_Dir uut (
		.pc(pc), 
		.direction(direction), 
		.sel_dir(sel_dir), 
		.output_dir(output_dir)
	);

	initial begin
		// Initialize Inputs
		pc = 0;
		direction = 0;
		sel_dir = 0;

		// Wait 100 ns for global reset to finish
		#100;
      pc = 32'hFFFFFFFF;
		direction = 32'hAAAAAAAA;
		
		sel_dir = 0;
		
		#10;
		sel_dir = 1;
		
		#20 $finish;
		// Add stimulus here

	end
      
endmodule

