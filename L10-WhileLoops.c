#include <stdio.h>

int main(void){

	//WHILE LOOP

	int i = 0;
	while(i<5){
		printf("%d\n",i);
		i++;
	}
	
	printf("______\n\n");

	//DO WHILE LOOP
	i=0;
	do{
		printf("%d\n",i);
		i++;
	}while(i<5);

	return 0;
}
