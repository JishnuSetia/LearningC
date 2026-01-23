#include <stdio.h>

int main(void){
	// Implicit Type Conversion
	int var = 9.9;
	float var1 = 9;
	float var2 = 5/2;
	printf("%d\n",var);
	printf("%f\n",var1);
	printf("%f\n",var2);

	//Explicit Type Conversion
	float var3 = (float) 5/2;
	printf("%f\n",var3);
	return 0;
}
