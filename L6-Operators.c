#include <stdio.h>

int main(void){

	//OPERATORS

	/*

	Arithmetic Operators:-
	+ : Addition
	- : Subtraction
	* : Multiplication
	/ : Division
	% : Modulus(Return Remainder of Division)
	++ : Increment (Increase Val by 1)
	-- : Decrement (Decrease Val by 1)
	
	*/

	int x = 10;
	int y = 3;

	printf("%d\n", x + y);
	printf("%d\n", x - y);
	printf("%d\n", x * y);
	printf("%d\n", x / y);
	printf("%d\n", x % y);

	int z = 5;
	++z;
	printf("%d\n", z);
	--z;
	printf("%d\n", z);

	/*
	
	Assignment Operators :-

	Assume there is an int variable x (not the one used above)
	
	= : Assigns Value to Variable
	+= : same as x=x+(whatever val is assigned)
	-= : same as x=x-(whatever val is assigned)
	*= : same as x=x*(whatever val is assigned)
	/= : same as x=x/(whatever val is assigned)
	%= : same as x=x%(whatever val is assigned)
	
	
	&= : same as x=x&(whatever val is assigned) (this operation is bitwise and)
	
	Example:
	5 and 3
	
	5 = 00000101
	3 = 00000011

	Run and on each bit

	Output = 00000001 = 1
	
	|= : same as x=x|(whatever val is assigned) (this operation is bitwise or)
	
	Example:
	5 and 3

	5 = 00000101
	3 = 00000011

	Run or on each bit

	Output = 00000111 = 7

	^= : same as x=x^(whatever val is assigned) (this operation is bitwise xor)
	
	Example:
	5 and 3

	5 = 00000101
	3 = 00000011

	Run xor on each bit

	Output = 00000110 = 6	

	<<= : same as x=x<<(whatever val is assigned) (this operation is left shift assignment)

	Example:
	3 and 1
	
	3 = 00000011

	since assignment is 1, we should shift this to the left by 1 bit
	
	00000011 --> 00000110

	Output = 6

	>>= : same as x=x>>(whatever val is assigned) (this operation is right shift assignment)
	
	Example:
	3 and 1

	3 = 00000011

	since assignment is 1, we shift this to right by 1 bit (delete the end bit and add zero in start)

	00000011 --> 00000001
	
	Output = 1

	*/

	int var1;

	var1 = 10;
	var1 += 3;
        printf("var1 += 3  -> %d\n", var1);   // 13

    
    	var1 = 10;
    	var1 -= 3;
    	printf("var1 -= 3  -> %d\n", var1);   // 7

    
    	var1 = 10;
    	var1 *= 3;
    	printf("var1 *= 3  -> %d\n", var1);   // 30

    	// /=
    	var1 = 10;
    	var1 /= 3;
    	printf("var1 /= 3  -> %d\n", var1);   // 3 (integer division)

    	// %=
    	var1 = 10;
    	var1 %= 3;
    	printf("var1 %%= 3 -> %d\n", var1);   // 1


    	// Bitwise assignment operators
    	// ----------------------------

    	// &=
    	var1 = 5;   // 00000101
    	var1 &= 3;  // 00000011
    	printf("var1 &= 3  -> %d\n", var1);   // 1

    	// |=
    	var1 = 5;
    	var1 |= 3;
    	printf("var1 |= 3  -> %d\n", var1);   // 7

    	// ^=
    	var1 = 5;
    	var1 ^= 3;
    	printf("var1 ^= 3  -> %d\n", var1);   // 6


    	// Shift assignment operators
    	// --------------------------

    	// <<=
    	var1 = 3;   // 00000011
    	var1 <<= 1;
    	printf("var1 <<= 1 -> %d\n", var1);   // 6

    	// >>=
    	var1 = 3;
    	var1 >>= 1;
    	printf("var1 >>= 1 -> %d\n", var1);   // 1
	
	/*

	Comparision Operators:-
	
	== : equal to
	!= : not equal to
	> : greater than
	< : less than
	>= : greater than equal to
	<= : lesser than equal to
	
	*/

	/*
	
	Logical Operators:-
	
	&& : and
	|| : or
	! : not

	1 = true
	0 = false
	
	*/

	/*
	
	Priority of Operators:- 
	
	() - Parentheses
	*, /, % - Multiplication, Division, Modulus
	+, - - Addition, Subtraction
	>, <, >=, <= - Comparison
	==, != - Equality
	&& - Logical AND
	|| - Logical OR
	= - Assignment
	
	*/

	return 0;
}
