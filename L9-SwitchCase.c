#include <stdio.h>

int main(void){
	// SWITCH CASE

	int num = 4;

	switch(num){
		case 1:
			printf("Switch 1");
			break;
		case 2:
			printf("Switch 2");
			break;
		case 3:
			printf("Switch 3");
			break;
		default:
			printf("Switch Not Found");
			break;
	}
	
	return 0;
}
