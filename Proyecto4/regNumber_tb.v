`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:37:28 06/08/2017
// Design Name:   regNumber
// Module Name:   D:/FPGA/P4-TD/Proyecto4/regNumber_tb.v
// Project Name:  Proyecto4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regNumber
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module regNumber_tb;

	// Inputs
	reg clk;
	reg [7:0] keycode;
	reg rx_done;

	// Outputs
	wire [7:0] first;
	wire [7:0] second;
	wire [7:0] third;
	wire [7:0] fourth;

	// Instantiate the Unit Under Test (UUT)
	regNumber uut (
		//.clk(clk), 
		.keycode(keycode),
		.rx_done(rx_done),
		.first(first), 
		.second(second), 
		.third(third), 
		.fourth(fourth)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		keycode = 0;

		// Wait 100 ns for global reset to finish
		#100;
		keycode = 8'h16;
		rx_done = 1;
      
		#40;
		keycode = 8'h1E;
		
		//#20;
		//keycode = 8'h16;
		
		#40;
		keycode = 8'h26;
		
		#40;
		keycode = 8'h25;
		
		
		// Add stimulus here

	end
	
	always begin
		#10  clk = ~clk;
	end
      
endmodule

