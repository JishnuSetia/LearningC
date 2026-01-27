#include <stdio.h>

/*

Format to declare functions

returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}

only void funtions dont return anything

functions can have any number of params

functions must be declared before call

*/

int add(int x,int y){
	return x+y;
}

void printHello(){
	printf("Hello!\n");
}

float div(float x, float y){
	return x/y;
}

void printArrNums(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main(void){
	//Functions
	//A function is a block of code which only runs when it is called.

	printf("%d\n",add(2,3));
	printHello();
	printf("%.2f\n",div(2,3));
	int nums[] = {1,2,3,4,5};
	printArrNums(nums);
        printArrNums(nums);

	return 0;
}
