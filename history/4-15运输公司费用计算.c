#include<stdio.h>
void main()
{
	double p, w, s;
	printf("input the price,weight and sentence:\n");
	scanf_s("%lf%lf%lf", &p, &w, &s);
	printf("the total fee is:%lf\n", p*w*s*(1 - (s < 250 ? 0 : s < 500 ?\
		0.02 : s < 1000 ? 0.05 : s < 2000 ? 0.08 : s < 3000 ? 0.1 : 0.15)));
	
}