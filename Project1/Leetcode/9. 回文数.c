#include<stdio.h>
#include<stdbool.h>
void main()
{
	bool isPalindrome(int x);
	printf("%d", isPalindrome(121));
}

bool isPalindrome(int x) {
	if (x < 0) return false;
	int rev = 0, temp, n = x;
	while (n)
	{
		temp = n % 10;
		if (rev >= INT_MAX / 10) return false;
		rev = rev * 10 + temp;
		n /= 10;
	}
	return rev == x ? true : false;
}