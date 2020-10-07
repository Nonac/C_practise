#include<stdio.h>
void main()
{
	int i, j, k, num = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				i != j && j != k && i != k ? num++ : 0;
			}
		}
	}
	printf("%d", num);
}