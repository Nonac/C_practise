/*#include<stdio.h>
void main()
{
	void exchange(int* q1, int* q2, int* q3);
	int a, b, c, * q1 = &a, * q2 = &b, * q3 = &c;
	scanf_s("%d%d%d", &a, &b, &c);
	exchange(q1, q2, q3);
	printf("%d %d %d", a, b, c);
}
void exchange(int* q1, int* q2, int* q3)
{
	void swap(int* pt1, int* pt2);
	*q1 < *q2 ? swap(q1, q2) : 0;
	*q1 < *q3 ? swap(q1, q3) : 0;
	*q2 < *q3 ? swap(q2, q3) : 0;
}
void swap(int* pt1, int* pt2)
{
	int temp;
	temp = *pt1;
	*pt1 = *pt2;
	*pt2 = temp;
}*/




#include<stdio.h>
#include <stdlib.h>
int n, i = 0, j = 0;
void main()
{
	int* a;
	void swap(int* x, int* y);
	printf("how many number do you wanna input:\n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	printf("input all the numbers:\n");
	while (i<n)
	{
		scanf_s("%d", &a[i]);
		i++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(&a[i], &a[j]);
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	free(a);
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x; *x = *y; *y = temp;
}