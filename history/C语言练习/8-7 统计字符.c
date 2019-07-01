#include<stdio.h>
void main()
{
	int num[10] = { 0 }, blank = 0, others = 0, a = 0;
	printf("input a dozens of charators:\n");
	while (a != EOF)
	{
		a = getchar();
		a > 47 && a < 58 ? num[a - 48]++ : a == 32 || a == 9 || a == 10 ? blank++: others++;
	}
	for (size_t i = 0; i < 10; i++)
	{
		if (num[i] != 0) printf("There are %d %d in this paragraph.\n", num[i], i);
	}
	printf("There are %d blank in this paragraph.\n", blank);
	printf("There are %d others in this paragraph.\n", others);
	system("pause");
}