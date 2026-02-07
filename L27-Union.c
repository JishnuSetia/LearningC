#include <stdio.h>
#include <string.h>

// Unions 
// A union is similar to a struct in that it can store members of different data types.

/*

However, there are some differences:
- In a struct, each member has its own memory.
- In a union, all members share the same memory, which means you can only use one of the values at a time.

*/

union myUnion{
	int a;
	char name[100];
};

int main(void){
	union myUnion u1;
	u1.a = 10;
	printf("%d,%s\n",u1.a,u1.name);
	strcpy(u1.name,"Jishnu");

	// value a gets overriden by the first 4 bytes of the new information, in this case, "Jish" which converts to hex 0x6873694A which converts to decimal value 1752394058 which is new val of a which makes val of a unreliable

	printf("%d,%s\n",u1.a,u1.name);

	//The size of a union will always be the same as the size of its largest member:
	printf("Size of union: %zu bytes\n", sizeof(u1));

	return 0;
}
