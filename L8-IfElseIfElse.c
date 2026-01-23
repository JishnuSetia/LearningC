#include <stdio.h>

int main(void){
	
	int var = 10;
	
	if (var == 5) {
		printf("5\n");
	} else if (var == 10) {
		printf("10\n");
	} else {
		printf("WHAT IS THIS NUM!!!!\n");
	}

	// Short Hand if
	printf("%d\n",var==10?20000:1);
	
	return 0;
}
