#include<stdio.h>
void main()
{
	int fi[20] = { 1,1 }, i;
	for (i = 2; i < 20; i++)
	{
		fi[i] = fi[i - 1] + fi[i - 2];
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d\t", fi[i]);
	}
}