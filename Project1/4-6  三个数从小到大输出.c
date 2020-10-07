#include<stdio.h>
void main()
{
	int a, b, c, x;
	printf("input three numbers:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b) {
		x = a; a = b; b = x;
	}
	if (a > c) {
		x = a; a = c; c = x;
	}
	if (b > c) {
		x = b; b = c; c = x;
	}
	printf("%d%d%d", a, b, c);
}