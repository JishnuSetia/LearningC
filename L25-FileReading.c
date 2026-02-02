#include <stdio.h>

int main(void){
	FILE *fptr;
	fptr = fopen("manipulationTXTS/file2.txt","r");
	char mystring[100];
	//Will print extra line break cause at end of each line there already exists a \n
	while(fgets(mystring,100,fptr)){
		printf("%s\n",mystring);
	}
	fclose(fptr);
	return 0;
}
