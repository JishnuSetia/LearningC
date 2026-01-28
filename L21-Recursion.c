#include <stdio.h>

// Regular Recursion
int factorial(int n){
	return n<=1?1:n*factorial(n-1);
}

// Tail Recursion
int sumtoHelper(int n, int acc){
        return n<=0?acc:sumtoHelper(n-1,acc+n);
}

int sumto(int n){
	return sumtoHelper(n,0);
} 

int main(void){
	printf("%d\n",factorial(5));
	printf("%d\n",sumto(5));

	return 0;
}
