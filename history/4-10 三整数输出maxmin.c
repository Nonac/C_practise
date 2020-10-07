#include<stdio.h>
void main()
{
	int a, b, c;
	printf("input three numbers:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("the max number is %d\n", a > b && a > c ? a : b > c ? b : c);
	printf("the min number is %d\n", a < b && a < c ? a : b < c ? b : c);
}