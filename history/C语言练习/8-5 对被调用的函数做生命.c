#include<stdio.h>
void main()
{
	float add(float, float),a,b;
	scanf_s("%f%f", &a, &b);
	printf("sum is %f\n", add(a, b));
}
float add(float a, float b)
{
	return (a+b);
}