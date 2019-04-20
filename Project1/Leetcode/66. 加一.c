/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i = 0;

	if (digits[digitsSize - 1] != 9)
	{
		digits[digitsSize - 1]++;
	}
	else
	{
		for (i = digitsSize - 1; i >= 0; i--)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				digits[i]++;
				break;
			}
		}
	}

	if (digits[0] == 0)
		* returnSize = digitsSize + 1;
	else
	{
		*returnSize = digitsSize;
		return digits;
	}
	int* array = (int*)malloc(sizeof(int) * (*returnSize));

	for (i = *returnSize - 1; i >= 1; i--)
		array[i] = digits[i - 1];

	array[0] = 1;

	return array;
}