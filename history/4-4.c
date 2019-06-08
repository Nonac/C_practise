#include<stdio.h>
void main()
{
	int a, b;
	printf("input two numbers:\n");
	scanf_s("%d%d", &a, &b);
	if (a > b) {
		printf("the max number is %d\n", a);
	}
	else {
		printf("the max number is %d\n", b);
	}
}