#include<stdio.h>
void main()
{
	int n, move(int, char, char, char);
	char a = 'A', b = 'B', c = 'C';
	printf("how many plate do you wanna move:\n");
	scanf_s("%d", &n);
	move(n, a, b, c);
}
int move(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("put %c into %c\n", x, z);
	}
	else
	{
		move(n - 1, x, z, y);
		printf("put %c into %c\n", x, z);
		move(n - 1, y, x, z);
	}
}