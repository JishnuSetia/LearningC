#include <stdio.h>
#include <string.h>

int main(void){
	// Strings
	// A string is an array of characters

	char name[] = "Jishnu Setia";
	printf("Hello \"%s\"\n",name);
	
	// use backslash before these chars if want to display in string or else will cause error ' " and \
	// Escape sequence 
	
	// \n is new line
	// \t is tab space 
	// \0 is null
	
	// String functions
	// Must include string.h for use

	// strlen() gets the length of string g
	printf("Length of Name = %zu\n",strlen(name));

	// strcat(var1,var2) concatenates two strings and puts output in var1
	// WARNING: var1 must have enough space allocation or else it will throw error /runc.sh: line 10: 51695 Trace/BPT trap: 5 ./a.out since there is not enough space to store contents

	char greeting[50] = "Hello ";
	strcat(greeting,name);
	printf("%s\n",greeting);

	// strcpy(var1,var2) copies contents of var2 to var1
	char greetcpy[50];
	strcpy(greetcpy,greeting);
	printf("%s\n",greetcpy);

	// strcmp(var1,var2) compares strings var1 and var2
	// if var1 is equal to var2, output will be 0
	// if output is less than 0, then var1 comes before var2
	// if output is greater than 0, than var2 comes before var1
	char hi[]="Hi";
	printf("%d\n",strcmp(greeting,greetcpy));
	printf("%d\n",strcmp(greeting,hi));
	
	return 0;
}
