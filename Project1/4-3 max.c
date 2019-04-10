#include<stdio.h>
void main()
{
	int max,a, b;
	printf("input two numbers:\n");
	scanf_s("%d%d", &a, &b);
	max = a;
	if (max < b)
	{
		max = b;
	}
	printf("max number is %d\n", max);
}