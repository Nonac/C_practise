char* intToRoman(int num) {
	char* res = calloc(100, sizeof(char));
	while (num / 1000)
	{
		num -= 1000;
		strcat(res, "M");
	}
	while (num / 900)
	{
		num -= 900;
		strcat(res, "CM");
	}
	while (num / 500)
	{
		num -= 500;
		strcat(res, "D");
	}
	while (num / 400)
	{
		num -= 400;
		strcat(res, "CD");
	}
	while (num / 100)
	{
		num -= 100;
		strcat(res, "C");
	}
	while (num / 90)
	{
		num -= 90;
		strcat(res, "XC");
	}
	while (num / 50)
	{
		num -= 50;
		strcat(res, "L");
	}
	while (num / 40)
	{
		num -= 40;
		strcat(res, "XL");
	}
	while (num / 10)
	{
		num -= 10;
		strcat(res, "X");
	}
	while (num / 9)
	{
		num -= 9;
		strcat(res, "IX");
	}
	while (num / 5)
	{
		num -= 5;
		strcat(res, "V");
	}
	while (num / 4)
	{
		num -= 4;
		strcat(res, "IV");
	}
	while (num / 1)
	{
		num -= 1;
		strcat(res, "I");
	}
	return res;
	free(res);
}