#include <stdio.h>

// TypeDef

//The typedef keyword lets you create a new name (an alias) for an existing type. This can make complex declarations easier to read, and your code easier to maintain.

typedef char Name[100];

typedef struct{
	char model[100];
	int year;
} Car;

int main(void){
	Name a = "Jishnu Setia";
	Name b = "John Doe";
	printf("%s\n%s\n",a,b);
	Car c ={"Ford Mustang",2025};
	printf("%s,%d\n",c.model,c.year);

	return 0;
}
