#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int len = 3;
	char* str = (char*)malloc(len * sizeof(char));
	str[0] = '0';
	printf("%c",str[0]);
}