char *countAndSay(int n) {
	if (n == 1)
	{
		return "1";
	}
	else
	{
		char* p = countAndSay(n - 1);
		char temp = *p;
		int sum = 1, size = strlen(p);
		for (int i = 1; i < size; i++)
		{
			if (*(p + i) == temp)
			{
				sum++;
			}
			else
			{
				temp = *(p + i);
				/*��취����һ���ַ�������������sum+temp������ȥ*/
			}
		}
	}
}