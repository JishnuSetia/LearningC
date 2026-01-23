#include <stdio.h>

int main(void){
	//Creating Variables
	/*
	DATA TYPES
	- int - use %d (decimal format) or %i to print (2-4 bytes)
	- float - use %f or %F to show (4 bytes) (6-7 decimal points)
	- double - use %lf to show (8 bytes) (15 decimal points)
	- char - use %c to show (1 byte)
	- char[] - Basically String(since string is a array of chars) but since it doesnt have string format, use this. %s to show*/
	
	//Creating INT VARIABLE
	int var1 = 10;

	//Creating FLOAT VARIABLE
	float var2 = 12.1;

	//Creating CHAR VARIABLE
	char var3 = 'a';

	//Creating CHAR[] VARIABLE
	char var4[] = "HELLO WORLD";

	//Creating CHAR VARIABLE using ASCII
	char var5 = 65;

	printf("%d\n",var1);
	printf("%f\n",var2);
	printf("%.2f\n",var2);//Controlling how many decimal points
	printf("%c\n",var3);
	printf("%s\n",var4);
	printf("%c\n",var5);

	// Manipulating Values
	var1 = 15;
	printf("%d\n",var1);
	var1=var1+1;
	printf("%d\n",var1);
	
	/*
	CONST Keyword
	- Makes variable unchangeable and readonly
	*/
	const int a = 2;
	printf("%d\n",a);
	//a = 5; WONT WORK CAUSE A IS CONSTANT!!!
		
	// Printing size of variables
	printf("%zu\n",sizeof(var1));
	printf("%zu\n",sizeof(var2));
	printf("%zu\n",sizeof(var3));
	printf("%zu\n",sizeof(var4));
	printf("%zu\n",sizeof(var5));
	

	/*
	MORE DATA TYPES IN C

	Besides the basic data types:
	- int
	- float
	- double
	- char

	C provides EXTENDED KEYWORDS to control:
	1) How large the number can be
	2) Whether the number can be negative or not

	These keywords are:
	- short
	- long
	- unsigned

	IMPORTANT:
	- Sizes are IMPLEMENTATION-DEPENDENT (depends on system & compiler)
	- Always use sizeof() if exact size matters

	---------------------------------------------------
	INTEGER TYPES
	---------------------------------------------------

	short int
	- Usually 2 bytes
	- Range: -32,768 to 32,767
	- Format Specifier: %hd

	unsigned int
	- Usually 2 or 4 bytes
	- Can ONLY store positive values
	- Range:
  		- 0 to 65,535 (2 bytes)
  		- 0 to 4,294,967,295 (4 bytes)
	- Format Specifier: %u

	long int
	- Usually 4 or 8 bytes
	- Range:
  		- 4 bytes: -2,147,483,648 to 2,147,483,647
  		- 8 bytes: very large range
	- Format Specifier: %ld

	long long int
	- Usually 8 bytes
	- Very large integer values
	- Range:
  		- -9,223,372,036,854,775,808
  		- to 9,223,372,036,854,775,807
	- Format Specifier: %lld

	unsigned long int
	- Usually 4 or 8 bytes
	- Positive values only
	- Format Specifier: %lu
	
	unsigned long long int
	- Usually 8 bytes
	- Positive values only
	- Very large range
	- Format Specifier: %llu

	---------------------------------------------------
	FLOATING POINT TYPES
	---------------------------------------------------

	long double
	- Size: 8, 12, or 16 bytes (depends on system)
	- More precision than double
	- Used when VERY high precision is needed
	- Format Specifier: %Lf

	---------------------------------------------------
	IMPORTANT NOTES
	---------------------------------------------------
	- unsigned types CANNOT store negative values
	- Using unsigned when you need negatives causes bugs
	- Mixing signed and unsigned can produce warnings
	- Always match the correct format specifier in printf
	- Wrong specifiers = undefined behavior

	RULE OF THUMB:
	- Use int for normal numbers
	- Use long / long long for large values
	- Use unsigned ONLY when negatives make no sense
	- Use sizeof(type) to check actual size on your system
	*/

	return 0;
}
