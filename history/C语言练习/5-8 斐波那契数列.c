#include<stdio.h>

/*
int Fib(int i)
{
    if(i<2) return i==0?0:1;
    return Fib(i-1)+Fib(i-2);
}
 *
 */

void main()
{
	int n,fia=1,fib=1,i,fic;
	printf("input a number:\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%d\n", fia);
		fic = fib + fia;
		fia = fib;
		fib = fic;
	}

	
}