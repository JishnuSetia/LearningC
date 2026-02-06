#include <stdio.h>
#include <string.h>

// Structures
//A structure in C is a user-defined data type that groups related variables of different types under a single name, allocating separate memory for each member.
// Note: Cant put funcs in structures, but they can have pointers

// Defining Structure
struct myStruct{
	int x;
	char z[100];
};

// Nested Structures
struct Owner{
	char name[100];
	int age;
};

struct Car{
	char name[100];
	char license[5];
	struct Owner owner;
};

void updateOwner(struct Car *ptr,char name[100]){
	strcpy(ptr->owner.name,name);
}

int main(){
	// Method 1 of creating structure var
	struct myStruct s1;
	s1.x=20;
	strcpy(s1.z,"test");
	printf("%d,%s\n",s1.x,s1.z);
	
	// Method 2
	struct myStruct s2 = {10,"hello"};
	printf("%d,%s\n",s2.x,s2.z);
	
	// Copying structures
	struct myStruct s3;
	s3=s1;
	printf("%d,%s\n",s3.x,s3.z);
	
	printf("\n");
		
	// Demo for nested structures
	struct Owner p1 = {"John Doe",43};
	struct Car c1 = {"Ford Edge","A1263",p1};
	printf("Car: %s\nLicense: %s\nOwner: %s\nOwner Age: %d\n",c1.name,c1.license,c1.owner.name,c1.owner.age);	

	printf("\n");	

	// Struct pointers
	struct Car *ptr = &c1;
	printf("%s,%s,%s\n",ptr->name,ptr->license,ptr->owner.name);
	
	// Using struct pointers in funcs
	updateOwner(&c1,"Jack Smith");
	printf("%s,%s,%s\n",ptr->name,ptr->license,ptr->owner.name);
	
	return 0;
}
