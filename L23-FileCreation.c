#include <stdio.h>

int main(void){
	// FILE CREATION
	
	FILE *fptr;
	
	// Doesnt have ability to create directory if directory doesnt exist
	fptr = fopen("manipulationTXTS/file1.txt","w");
	fclose(fptr);

	return 0;
}
