`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:53:26 05/31/2017
// Design Name:   Mux_OperA
// Module Name:   D:/FPGA/P4-TD/Proyecto4/Mux_OperA_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_OperA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mux_OperA_tb;

	// Inputs
	reg [31:0] input_number;
	reg [31:0] immediate_ext;
	reg [31:0] immediate_desp;
	reg [1:0] sel_operA;

	// Outputs
	wire [31:0] output_A;

	// Instantiate the Unit Under Test (UUT)
	Mux_OperA uut (
		.input_number(input_number),
		.immediate_ext(immediate_ext), 
		.immediate_desp(immediate_desp), 
		.sel_operA(sel_operA), 
		.output_A(output_A)
	);

	initial begin
		// Initialize Inputs
		input_number = 0;
		immediate_ext = 0;
		immediate_desp = 0;
		sel_operA = 0;

		// Wait 100 ns for global reset to finish
		#100;
      input_number = 32'd1807;
		immediate_ext = 32'd2703;
		immediate_desp = 32'd0707;
		// Add stimulus here
		#10;
		sel_operA = 1;
		
		#10;
		sel_operA = 2;
		
		#10;
		sel_operA = 3;
		
		#10 $finish;
		
	end
      
endmodule

