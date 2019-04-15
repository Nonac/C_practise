#include<stdio.h>
#include <stdlib.h>
int n;
void main()
{
	void swap(int*, int*);
	int* a,i=0,temp;
	printf("how many numbers do you wanna input:\n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	printf("input all the numbers:\n");
	while (i < n)
	{
		scanf_s("%d", &a[i]);
		i++;
	}

	for (i = 0; i <= ((n - 1) / 2); i++)
	{
		swap(&a[i], &a[n - 1 - i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	free(a);
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x; *x = *y; *y = temp;
}