#include "main.h"

/**
 * more_numbers - print from 0 to 9 without 2 and 4
 * Return: null
 */
void more_numbers(void)
{
	int c;
	int d;

	for (d = 0; d < 10; d++)
	{
		bool f = false;

		for (c = 0; c <= 9 ; c++)
		{
			if (c == 4 && f)
			{
				break;
			}
			else
			{
				_putchar(c + 48);
				f = true;
			}
			if (c == 9)
				c = 0;
		}
		_putchar('\n');
	}
}
/*
 * just with 2 put_char
*/
