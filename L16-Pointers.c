#include <stdio.h>

int main(void){
	// Memory Address and Pointers
	
	// Memory Address
	// The memory address is the location of where the variable is stored on the computer.
	// Hexadecimal format
	// To view, we use reference operator & and to print we use format specifier %p
	int num = 7;
	printf("%p\n",&num); //&num is a pointer

	// Pointers
	// A pointer is a variable that stores the memory address of another variable as its value.
	// A pointer variable points to a data type (like int) of the same type, and is created with *
	int* ptr = &num;
	printf("%p\n",ptr);
	
	// To view pointer data
	printf("%d\n",*ptr); //Dereferencing
	
	// For arrays and strings, the name of the variable points to its first memory allocation
	int myNumbers[4] = {25, 50, 75, 100};
	printf("%p\n", myNumbers);
	printf("%p\n", &myNumbers[0]);	

	// Get the value of the second element in myNumbers
	printf("%d\n", *(myNumbers + 1));

	// Get the value of the third element in myNumbers
	printf("%d", *(myNumbers + 2));	
	
	// Pointer Arithmetic
	int *p = myNumbers;  // myNumbers[0]

	printf("%d\n", *p);
	p++;           // move to myNumbers[1]
	printf("%d\n", *p); 
	p--;           // back to myNumbers[0]
	printf("%d\n", *p); 
	
	p += 2;        // jump to myNumbers[2]
	printf("%d\n", *p); 
	
	int *start = &myNumbers[1]; 
	int *end = &myNumbers[3];   

	printf("%ld\n", end - start); // 2 elements apart
	
	// Pointer Arithmetic Depends on Type
	// For example:

	// An int* pointer moves by the size of an integer (usually 4 bytes).
	// A char* pointer moves by the size of a character (1 byte).	

	// Pointer to Pointer
	int myNum = 10;       // normal variable
	int *ptrr = &myNum;    // pointer to int
	int **pptr = &ptrr;    // pointer to pointer

	printf("myNum = %d\n", myNum);
	printf("*ptr = %d\n", *ptrr);
	printf("**pptr = %d\n", **pptr);

	return 0;
}
