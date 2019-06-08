/*#include<stdio.h>
#include <stdlib.h>
/*void main()
{
	char* addBinary(char* a, char* b), * p;
	char* a = "1110001", * b = "110100101";
	p = addBinary(a, b);
	for (int i = 0; i < strlen(p); i++)
	{
		printf("%c", *(p+i));
	}
	
}
char* addBinary(char* a, char* b) {
	int i, j, temp, temp1, lenA, lenB, len;
	char* str;
	lenA = strlen(a);
	lenB = strlen(b);
	len = lenA > lenB ? lenA : lenB;
	str = (char*)malloc((len + 2) * sizeof(char));//����Ŀռ�Ҫ���������ַ������ȼ�1+1����һ��1ָ�ַ�����Ӻ���ܽ�λ���ڶ���1ָ�ַ�������'\0'�����ַ�
	memset(str, 0, (len + 2) * sizeof(char));
	j = len - 1; temp = 0;
	for (i = len; i >= 0 && lenA > 0 && lenB > 0; i--) {
		*(str + i) = ((*(a + lenA - 1) - '0') + (*(b + lenB - 1) - '0') + temp) % 2 + '0';
		temp = ((*(a + lenA - 1) - '0') + (*(b + lenB - 1) - '0') + temp) / 2;
		lenA--; lenB--;
	}
	if (lenA == 0) {//���b�ַ������и�ֵ��str
		for (; lenB > 0; i--) {
			*(str + i) = ((*(b + lenB - 1) - '0') + temp) % 2 + '0';
			temp = ((*(b + lenB - 1) - '0') + temp) / 2;
			lenB--;
		}
	}
	else if (lenB == 0) {//��a�ַ������и�ֵ��str
		for (; lenA > 0; i--) {
			*(str + i) = ((*(a + lenA - 1) - '0') + temp) % 2 + '0';
			temp = ((*(a + lenA - 1) - '0') + temp) / 2;
			lenA--;
		}
	}
	if (temp == 1) { *(str + i) = temp + '0'; return str + i; }//��temp��λΪ1����ֵ��str
	return str + i + 1;
}*/

/*char* addBinary(char* a, char* b) {
	if (strlen(a) > strlen(b))
	{
		char* c = a;
		a = b;
		b = c;
	}
	int len = strlen(b) + 1,min = strlen(a), i;
	char* res=(char *)malloc((len) * sizeof(char));
	memset(res, '0', len);
	res[len] = '\0';
	char temp = '0';
	for (i = 0; i < min; i++)
	{
		*(res - i + len - 1) = (a[strlen(a) - i - 1]) ^ (b[strlen(b) - i - 1]) ^ temp;
		if (a[strlen(a) - i - 1] + b[strlen(b) - i - 1] + temp > 145)
		{
			temp = '1';
		}
		else temp = '0';
	}
	for (i = min; i < len-1; i++)
	{
		*(res - i + len - 1) = '0' ^ (b[strlen(b) - i - 1]) ^ temp;
		if (b[strlen(b) - i - 1] + temp > 97)
		{
			temp = '1';
		}
		else temp = '0';
	}
	if ((temp == '0') && (res[0] == 48))
	{
		for (i = 0; res[i] != '\0'; i++)
			res[i] = res[i + 1];
		res[i] = res[i + 1];
	}
	else if ((temp == '1') && (*res == 48))
	{
		res[0] = '1';
	}
	return res;
	free(res);
}*/