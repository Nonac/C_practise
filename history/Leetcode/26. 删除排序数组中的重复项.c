int removeDuplicates(int* nums, int numsSize) {
	int res = 1;
	if (numsSize == 0)
	{
		return  0;
	}
	int z = nums[0];
	for (int i = 0; i < numsSize; i++)
	{
		if (z != nums[i])
		{
			nums[res++] = nums[i];
			z = nums[i];
		}
	}
	return res;
}