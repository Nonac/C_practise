#include<math.h>
#include<stdio.h>
void main()
{
	double x, s;

	printf("input number:\n");
	scanf_s("%lf", &x);
	s = sin(x);
	printf("sin of %lf is %lf\n", x, s);
}