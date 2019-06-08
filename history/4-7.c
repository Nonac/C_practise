#include<stdio.h>
void main()
{
	int a, b, c;
	printf("input a,b,c\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("a=%x,b=%x,c=%x", &a, &b, &c);
}