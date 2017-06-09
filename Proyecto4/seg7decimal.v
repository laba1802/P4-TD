`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:11 06/07/2017 
// Design Name: 
// Module Name:    seg7decimal 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module seg7decimal(

	input [31:0] x,
    input clk,
	 input reset,
    output reg [6:0] seg,
    output [3:0] an,
    output dp 
	 );
	 
	 
wire [1:0] s;	 
reg [7:0] digit;

assign dp = 1;

	localparam N = 18;
	 
	reg [N-1:0]count;
 
	always @ (posedge clk or posedge reset)
	 begin
	  if (reset)
	   count <= 0;
	  else
	   count <= count + 1'b1;
	 end
	 

// quad 4to1 MUX.

	
	reg [7:0]sseg;
	reg [3:0]an_temp;
	always @ (*)
	 begin
	  case(count[N-1:N-2])
		
	   2'b00 : 
		begin
		 digit <= x[7:0];
		 an_temp = 4'b1110;
		end
		
	   2'b01:
		begin
		 digit <= x[15:8];
		 an_temp = 4'b1101;
		end
		
	   2'b10:
		begin
		 digit <= x[23:16];
		 an_temp = 4'b1011;
		end
		 
	   2'b11:
		begin
		 digit <= x[31:24];
		 an_temp = 4'b0111;
		end
	  endcase
	 end
	assign an = an_temp;
	
	//decoder or truth-table for 7seg display values
	always @(*)

		case(digit)

		//////////<---MSB-LSB<---
		//////////////gfedcba////////////////////////////////////////////           a
		7'h45 : seg = 7'b1000000; //0
		7'h16 : seg = 7'b1111001; //1
		7'h1E : seg = 7'b0100100; //2
		7'h26 : seg = 7'b0110000; //3
		7'h25 : seg = 7'b0011001; //4
		7'h2E : seg = 7'b0010010; //5
		7'h36 : seg = 7'b0000010; //6
		7'h3D : seg = 7'b1111000; //7
		7'h3E : seg = 7'b0000000; //8
		7'h46 : seg = 7'b0010000; //9
		7'hF0 : seg = 7'b1111110;
	   default : seg = 7'b1111111; //0

		endcase

endmodule
