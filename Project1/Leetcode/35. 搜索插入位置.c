#include<stdio.h>
void main()
{
	int searchInsert(int* nums, int numsSize, int target);
	int nums[] = { 1, 3, 5, 6 };
	int* p = nums;
	printf("%d", searchInsert(p, 4, 0));
}
int searchInsert(int* nums, int numsSize, int target) {
    int min= (nums[0]-target>0)?nums[0]-target:target-nums[0],limit,res=0;
    for(int i=0;i<numsSize;i++)
    {
		if (nums[i] == target)
		{
			return i;
		}
        limit = (nums[i]-target>0)?nums[i]-target:target-nums[i];
        if (limit<min)
        {
            min=limit;
            res=i;
        }
    }
	return res = (nums[res] < target) ? res + 1 : res;
}