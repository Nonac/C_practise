#include<stdio.h>
void main()
{
	char c;
	printf("input a charater:\n");
	c = getchar();
	printf("%c\n", c >= 'A'&&c <= 'Z' ? c + 32 : c);
}