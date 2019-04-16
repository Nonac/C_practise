#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
	int n= 15,reverse(int);
	printf("%d\n",reverse(n));
}
int reverse(int x) {
	int res, i, flag = 0;
	if (x <= INT_MIN || x > INT_MAX) return 0;
	if (x < 0)
	{
		x = -x;
		flag = 1;
	}
	char str[32], strre[32] = { '\0' };
	sprintf_s(str, "%d", x);
	char* pointer = str;
	int len = strlen(str);
	for (i = 0; i < len; i++)
	{
		strre[len - 1 - i] = str[i];
	}
	if (atoi(strre) <= INT_MAX)
	{
		res = flag == 0 ? atoi(strre) : (-1) * atoi(strre);
		return res;
	}
	else return 0;
}