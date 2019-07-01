#include<stdio.h>
void main()
{
	int a = 0, n;
	printf("\n input n: ");
	scanf_s("%d", &n);
	while (n--)
	{
		printf("%d", a++ * 2); 
	}
}