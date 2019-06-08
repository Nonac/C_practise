#include<stdio.h>
void main()
{
	int a[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	int(*p)[4] = a;
	int r=99, c=99,i;
	while (r > 2 || c > 3)
	{
		printf("input the Row and Column:\n");
		scanf_s("%d%d", &r, &c);
	}
	printf("The No.%d row is:\n", r);
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(*(p + r) + i));
	}
	printf("\nThe No.%d column is:\n", r);
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(*(p + i) + c));
	}
}