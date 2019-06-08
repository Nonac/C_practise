#include<stdio.h>
void main()
{
	int i,m;
	printf("input a number:\n");
	scanf_s("%d", &m);
	for (i = m - 1; i > 1; i--)
	{
		if (m % i == 0) break;
	}
	i == 1 ? printf("yes") : printf("no");
}