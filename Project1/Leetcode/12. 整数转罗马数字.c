#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
#include<stdio.h>
#include <string.h>
void main()
{
	char* intToRoman(int num);
	printf("%c", intToRoman(3));
}
char* intToRoman(int num) {
	char res = { '\0' };
	while (num / M)
	{
		num -= M;
		strcat(res, 'M');
	}
	while (num > M - C)
	{
		num -= (M - C);
		strcpy(res, 'CM');
	}
	while (num > D)
	{
		num -= D;
		strcpy(res, 'D');
	}
	while (num > (D-C))
	{
		num -= C;
		strcpy(res, 'CD');
	}
	while (num > C)
	{
		num -= C;
		strcpy(res, 'C');
	}
	while (num > (C - X))
	{
		num -= (C - X);
		strcpy(res, 'XC');
	}
	while (num > L)
	{
		num -= L;
		strcpy(res, 'L');
	}
	while (num > (L - X))
	{
		num -= (L - X);
		strcpy(res, 'XL');
	}
	while (num > X)
	{
		num -= X;
		strcpy(res, 'X');
	}
	while (num > (X - I))
	{
		num -= (X - I);
		strcpy(res, 'IX');
	}
	while (num > V)
	{
		num -= V;
		strcpy(res, 'V');
	}
	while (num > (V - I))
	{
		num -= (V - I);
		strcpy(res, 'IV');
	}
	while (num > I)
	{
		num -= I;
		strcpy(res, 'I');
	}
}