#include<stdio.h>
#include<math.h>
void main()
{
	double pownew(double, double), a, b;
	printf("input two numbers:\n");
	scanf_s("%lf%lf", &a, &b);
	printf("the result is %lf", pownew(a, b));
}
double pownew(double x, double y)
{
	double result = 1,sqrtnew(double);
	if (y >= 0)
	{
		while (y / 1 > 0)
		{
			result = result * x;
			y--;
		}		
		if (y != 0)
		{
			result = result * sqrtnew(pownew(x, 2*y));
		}
	}
	else 
	{
		result = pownew((1 / x), ((-1) * y));
	}
	return result;
}
double sqrtnew(double x, double y)
{
	return pow(x, 0.5);
}