#include<stdio.h>
#include <stdint.h>
void main()
{
	uint32_t n= 0000001010010;
	printf("%ld", reverseBits(n));
}
uint32_t reverseBits(uint32_t n) {
	uint32_t rev = 0;
	int i = 32;
	while (i--)
	{
		rev <<= 1;
		rev += n & 1;
		n >>= 1;
	}
	return rev;
}