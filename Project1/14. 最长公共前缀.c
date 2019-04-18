#include<stdio.h>
#include<string.h>
void main()
{
	char* longestCommonPrefix(char** strs, int strsSize);
	printf("%c", longestCommonPrefix(["flower", "flow", "flight"],3));
}

char* longestCommonPrefix(char** strs, int strsSize) {
	int count = 0;
	if (strsSize == 1)
		return strs[0];
	else if (strsSize == 0)
		return "";
	else
	{
		int s[strsSize];
		for (int i = 0; i < strsSize; i++)
		{
			s[i] = strlen(strs[i]);
			if (s[i] == 0)
				return "";
		}
		int min = s[0];
		for (int i = 1; i < strsSize; i++)
			if (min > s[i])
				min = s[i];
		for (int i = 0; i < strsSize - 1; i++)
		{
			if (strs[i][count] == strs[i + 1][count])
			{

				if (i == strsSize - 2 && count < min)
				{
					count++;
					i = -1;
				}
			}
			else break;
		}
		strs[0][count] = '\0';
		return strs[0];
	}
}