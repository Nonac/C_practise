#include<stdio.h>
void main()
{
	int missingNumber(int* nums, int numsSize), a[] = { 3,0,1 };
	printf("%d", missingNumber(a,3));
}

int missingNumber(int* nums, int numsSize) {
	int res = numsSize, i;
	for (i = 0; i < numsSize; i++)
	{
		res = res ^ i;
		res = res ^ (*(nums + i));
	}
	return res;
}