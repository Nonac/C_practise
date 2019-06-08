#include<stdio.h>
void main()
{
	int del,a = 0;
	printf("input a charater u do wanna meet:\n");
	del = getchar();
	printf("input a dozens of charators:\n");
	extern void delchar(int, int);
	while (a != EOF)
	{
		a = getchar();
		delchar(del, a);
	}
	system("pause");
}