void moveZeroes(int* nums, int numsSize) {
	int unzero = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != 0)
		{
			nums[unzero++] = nums[i];
		}
	}
	for (int i = unzero; i < numsSize; i++)
	{
		nums[i] = 0;
	}
}