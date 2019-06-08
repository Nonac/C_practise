#include<stdio.h>
#define M 10
void main()
{
	int n,mark = 0, min = 0, max = M - 1, mid, a[M] = { -5,0,1,5,10,15,20,25,30,35 };
	printf("input a numbers:\n");
	scanf_s("%d", &n);
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (a[mid] == n)
		{
			mark = 1;
			printf("in");
			break;
		}
		else if (a[mid] < n)
		{
			min = mid + 1; 
		}
		else
		{
			max = mid - 1;
		}
	}
	mark == 0 ? printf("no") : 0;
}