#include<stdio.h>
void main()
{
	int a[3][3], i, j;
	printf("input a 3X3 array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			(i == 1 || j == 1) ? printf("%d\t", a[i][j]) : printf(" \t");
			j == 2 ? printf("\n") : 0;
		}
	}
}