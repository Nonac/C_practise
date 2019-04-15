#include<stdio.h>
#include <stdlib.h>
int n, i = 0, j = 0, temp;
void main()
{
	int* a;
	printf("how many number do you wanna input:\n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	printf("input all the numbers:\n");
	while (i<n)
	{
		scanf_s("%d", &a[i]);
		i++;
	}
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	free(a);
}