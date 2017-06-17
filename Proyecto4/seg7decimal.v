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
		/////////////////gfedcba////////////////////////////////////////////           a
		8'h00 : seg = 7'b1000000; //0
		8'h01 : seg = 7'b1111001; //1
		8'h02 : seg = 7'b0100100; //2
		8'h03 : seg = 7'b0110000; //3
		8'h04 : seg = 7'b0011001; //4
		8'h05 : seg = 7'b0010010; //5
		8'h06 : seg = 7'b0000010; //6
		8'h07 : seg = 7'b1111000; //7
		8'h08 : seg = 7'b0000000; //8
		8'h09 : seg = 7'b0010000; //9
		8'h0A : seg = 7'b0001000; //A
		8'h0C : seg = 7'b1000110; //C
		8'h0D : seg = 7'b0100001; //d
		8'h1E : seg = 7'b0000110; //E
		8'hA0 : seg = 7'b1101111; //i
		8'hA1 : seg = 7'b0111111; //-
		8'hA2 : seg = 7'b0001100; //P
		8'hA3 : seg = 7'b0101111; //r
		8'hA4 : seg = 7'b1100011; //u
		8'hA5 : seg = 7'b0101011; //n
		8'hA6 : seg = 7'b0001111; //t
		8'hA7 : seg = 7'b0001001; //X
		8'hA8 : seg = 7'b0100011; //o
		8'hA9 : seg = 7'b1111111; //
	   default : seg = 7'b1111111; //

		endcase
	
	
endmodule 