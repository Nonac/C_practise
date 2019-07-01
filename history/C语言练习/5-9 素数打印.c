#include<stdio.h>
void main()
{
	int i, min,max;
	printf("input the limit of prime number:\n");
	scanf_s("%d%d", &min,&max);
	while (min < max)
	{
		for (i = min - 1; i > 1; i--)
		{
			if (min % i == 0) break;
		}
		i == 1 ? printf("%d\n", min) : 0;
		min++;
	}
}