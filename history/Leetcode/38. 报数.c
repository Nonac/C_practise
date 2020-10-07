char* countAndSay(int n) {
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
				/*想办法创造一个字符串，依次输入sum+temp到里面去*/
			}
		}
	}
}