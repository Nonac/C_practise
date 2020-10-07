#include<stdio.h>
void main()
{
	int a, b, * a_pointer = &a, * b_pointer = &b;
	printf("input two numbers:\n");
	scanf_s("%d%d", a_pointer, b_pointer);
	*a_pointer > * b_pointer ? printf("%d %d", a, b) : printf("%d %d", b, a);
}