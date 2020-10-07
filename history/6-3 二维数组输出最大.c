#include<stdio.h>
#include<limits.h>
void main()
{
	int a[3][4], i, j, max = INT_MIN,i_max,j_max;
	printf("input a 2-D array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &a[i][j]);
			if (a[i][j] > max)
			{
				max = a[i][j];
				i_max = i;
				j_max = j;
			}
		}
	}
	printf("%d\t%d\t%d\t", max, i_max, j_max);
}