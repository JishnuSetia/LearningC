#include <stdio.h>

int main(void){
	
	// Arrays

	int nums[] = {1,2,3,4,5,6};

	// Accessing Array Element
	printf("%d\n",nums[0]);

	// Changing Array Element
	nums[0]=0;
	printf("%d\n",nums[0]);

	// Setting Array Size
	int nums2[4];
	nums2[0]=0;
	nums2[1]=1;
	nums2[2]=2;
	nums2[3]=2;

	// Getting Length of Array
	// Since there is no built in length func, we have to get length with calculations using sizeof
	
	int lengthNums2 = sizeof(nums2)/sizeof(nums2[0]);
	printf("Length=%d",lengthNums2);

	return 0;
}
