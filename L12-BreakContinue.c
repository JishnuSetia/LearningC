#include <stdio.h>

int main(void){
	// Break Clause

	for(int i=1;i<10;i++){
		if(i%2==0){
			break;
		}
		printf("%d\n",i);
	}

	printf("_________________\n\n");

	//Continue Clause
	
	for(int i=1;i<10;i++){
		if(i%2==0){
			continue;
		}
		printf("%d\n",i);
	}

	// Break and Continue can also be used for while loops

	return 0;
}
