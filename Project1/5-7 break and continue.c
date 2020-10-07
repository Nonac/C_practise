#include<conio.h>
#include<stdio.h>
void main()
{
	char ch;
	for (;;)
	{
		ch = _getch();
		if (ch == 27)
		{
			break;
		}
		if (ch == 13)
		{
			continue;
		}
		_putch(ch);
	}
	_getch();
}