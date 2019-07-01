#include<stdio.h>
void main()
{
	int max(float x, float y);
	float a, b;
	int c;
	scanf_s("%f%f", &a, &b);
	c = max(a, b);
	printf("max is %d\n", c);
}
int max(float x, float y)
{	
	float z;
	z = x > y ? x : y;
	return(z);
}