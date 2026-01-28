#include <stdio.h>

// Inline Functions
// An inline function is a small function that asks the compiler to insert its code directly where it is called, instead of jumping to it.

static inline int add(int x,int y){
	return x+y;
}

int nadd(int x,int y){
	return x+y;
}

/*

Inline vs Regular Function

Regular Function
Code jumps to the function each time it's called
Slightly slower (small delay)
Good for large functions

Inline Function
Code is inserted directly where it's called
Slightly faster
Good for small functions

*/

int main(void){
	printf("%d\n", add(2,3));
	printf("%d\n", nadd(2,3));

	return 0;
}

/*

When Not to Use Inline

Inline functions are best for small, simple functions. Avoid using them for:

- Large functions (they make your program bigger)
- Recursive functions
- Functions that are rarely called

Too many inline functions can make your program slower and larger, a problem known as code bloat.

*/
