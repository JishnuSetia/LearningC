#include <stdio.h>

// This is a global variable
int x = 5;
int* ptr = &x;

int sample(){
	//This is a local variable
	int x = 10;

	printf("%d\n",*ptr); //a global variable can be used with help of pointers

	// Refers to local variable x and returns 10
	return x;
}

int main(void){
	// Local and Global Scope of Variables

	// Refers to global variable x and prints 5
	printf("%d\n",x);
	
	printf("%d\n",sample());

	return 0;
}
