int singleNumber(int* nums, int numsSize) {
	int res = 0, i;
	for (i = 0; i < numsSize; i++)
	{
		res ^= *(nums + i);
	}
	res ^= 0;
	return res;
}