#include<stdio.h>
void main()
{
	int year;
	printf("input a year number:\n");
	scanf_s("%d", &year);
	(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 3200 != 0) ? \
		printf("yes") : printf("no");
}