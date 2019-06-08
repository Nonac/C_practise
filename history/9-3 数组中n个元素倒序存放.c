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
	int exchange(int a[], int n);
	exchange(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	free(a);
}
int exchange(int a[ ], int n)
{
	int temp=0,i = 0;
	extern void swap(int*, int*);
	for (i = 0; i <= ((n-1) / 2); i++)
	{
			swap(&a[i], &a[n - 1 - i]);
	}
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x; *x = *y; *y = temp;
}