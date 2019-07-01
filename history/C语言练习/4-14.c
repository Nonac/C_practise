#include<stdio.h>
#include<math.h>
void main()
{
	double a, b, c, s, area;
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f\n", a, b, c, s);
	printf("area=%7.2f\n", area);
}