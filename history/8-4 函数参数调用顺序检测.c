#include<stdio.h>
void main()
{
	int i = 0;
	int max(int, int);
	max(i, ++i) != 0 ? printf("from left to right") : printf("form right to left");
}
int max(int a, int b)
{
	int c;
	c = b > a ? 1 : 0;
	return c;
}