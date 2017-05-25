`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:44:18 05/24/2017
// Design Name:   Mux_OperB
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Mux_OperB_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_OperB
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_OperB_tb;

	// Inputs
	reg [31:0] pc;
	reg [31:0] input_number;
	reg sel_operb;

	// Outputs
	wire [31:0] output_Y;

	// Instantiate the Unit Under Test (UUT)
	Mux_OperB uut (
		.pc(pc), 
		.input_number(input_number),
		.sel_operb(sel_operb),
		.output_Y(output_Y)
	);

	initial begin
		// Initialize Inputs
		pc = 0;
		input_number = 0;
		sel_operb = 0;

		// Wait 100 ns for global reset to finish
		#100;
      pc = 32'hFFFFFFFF;
		input_number = 32'h0;
		// Add stimulus here
		sel_operb = 1;
		
		#10;
		sel_operb = 0;
		
		#10 $finish;
	end
      
endmodule

