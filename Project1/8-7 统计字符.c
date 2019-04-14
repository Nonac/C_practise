#include<stdio.h>
void main()
{
	int num[10] = { 0 }, blank = 0, others = 0,a;
	printf("input a dozens of charators:\n");
	while (1)
	{
		a = getchar();
		printf("%c", a);
		if (a == 27) break;
		a > 47 && a < 58 ? num[a - 48]++ : 0;
		a == 32 || a == 9 || a == 10 ? blank++ : 0;
		others++;
	}
	for (size_t i = 0; i < 11; i++)
	{
		if (num[i] != 0)printf("There are %d %d in this paragraph.", num[i], i);
	}
	printf("There are %d blank in this paragraph.", blank);
	printf("There are %d others in this paragraph.", others);
}