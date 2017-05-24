`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:28:24 05/24/2017
// Design Name:   Mux_Sel_Dest
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Mux_Sel_Dest_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_Sel_Dest
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_Sel_Dest_tb;

	// Inputs
	reg [4:0] rt;
	reg [4:0] rd;
	reg sel_dest;

	// Outputs
	wire [4:0] output_dir;

	// Instantiate the Unit Under Test (UUT)
	Mux_Sel_Dest uut (
		.rt(rt), 
		.rd(rd), 
		.sel_dest(sel_dest), 
		.output_dir(output_dir)
	);

	initial begin
		// Initialize Inputs
		rt = 0;
		rd = 0;
		sel_dest = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rt = 4'hF;
		rd = 4'hA;
		
		sel_dest = 0;
		
		#10;
		sel_dest = 1;
		
		#20 $finish;  
		// Add stimulus here

	end
      
endmodule

