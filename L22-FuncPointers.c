#include <stdio.h>

// Function Pointers
// Syntax:
// returnType (*pointerName)(parameterType1, parameterType2, ...);
// Example
//int (*ptrex)(int, int);

int add(int x,int y){
	return x+y;
}

// Passing Functions as Params

void greetMorning() { printf("Good morning!\n"); }
void greetEvening() { printf("Good evening!\n"); }

void greet(void (*func)()) {
  func();
}

void printadd() { printf("Add\n"); }
void subtract() { printf("Subtract\n"); }
void multiply() { printf("Multiply\n"); }

int main(void){
	int (*ptr)(int,int) = add;
	// or ptr can be declared like this too
	// int (*ptr)(int,int)=&add;

	printf("%d\n",ptr(1,2));

	// Above Can be done with this too
	// printf("%d\n",*ptr(1,2));
	
	greet(greetMorning);
  	greet(greetEvening);
	
	void (*operations[3])() = { printadd, subtract, multiply };
  	for (int i = 0; i < 3; i++) {
    		operations[i]();
 	}

	return 0;
}
