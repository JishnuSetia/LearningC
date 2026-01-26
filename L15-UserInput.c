#include <stdio.h>

int main(void){
	// User Input
	// User input can be taken using scanf()
	// for nums and char, use scanf and when putting pointer, use & before var name
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	printf("\nYour Number is %d\n\n",num);
	
	// When taking string input, no need to put & before var name
	// scanf only gets single words so the code below will only take first name
	char name[50];
	printf("Enter Your Name: ");
	scanf("%s",name);
	printf("\nYour Name is %s\n\n",name);

	//To take multiple words, use fgets
	char fname[50];
	printf("Enter Your Full Name: ");
	getchar(); // Consumes new line char from before to avoid mix up
        fgets(fname,sizeof(fname),stdin);
        printf("\nHello %s\n",fname);

	return 0;
}
