#include<stdio.h>
#include<math.h>
void main()
{
	double pie = 0;
	int i = 0;
	while (i < 999999999)
	{
		pie = pie + pow((-1),i) / (2 * i + 1);
		i++;
	}
	printf("%3.10f", pie * 4);
}