#include <stdio.h>

int main(void){
	FILE *fptr;
	// This writes on file. If file has prev content, that will be overwritten
	fptr=fopen("manipulationTXTS/file2.txt","w");
	fprintf(fptr,"HELLO WORLD!!!!\n");
	fclose(fptr);

	FILE *fptr1;
	// This is to append to the content in the files.
	fptr1 = fopen("manipulationTXTS/file2.txt","a");
	fprintf(fptr1,"test123\n");
	fprintf(fptr1,"test123\n");
        fclose(fptr1);

	return 0;
}
