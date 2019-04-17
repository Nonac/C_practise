#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	char str =  "459684616546" ,int_max = "\0";
	sprintf_s(int_max, INT_MAX, 10);
	int_max < str ? printf("yes") : printf("no");
}