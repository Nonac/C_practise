#include<stdio.h>
#include<stdbool.h>
void main()
{
	bool isPowerOfFour(int num);
	printf("%d", isPowerOfFour(1) );
}
bool isPowerOfFour(int num) {
	if ((num < 1) || num == 2) return false;
	if (num == 1) return true;
	if ((num & (num - 1)) == 0)
	{
		int count = 0, n = num ^ (num / 2);
		while ((n & 1) == 0)
		{
			count++;
			n >>= 1;
		}
		return count % 2 == 1 ? true : false;
	}
	else return false;
}