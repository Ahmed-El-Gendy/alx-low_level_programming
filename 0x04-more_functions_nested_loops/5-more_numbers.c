#include "main.h"

/**
 * more_numbers - print from 0 to 9 without 2 and 4
 * Return: null
 */
void more_numbers(void)
{
	int c;
	int d;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c <= 14 ; c++)
		{
			if (c < 10)
				d = c;
			else
				d = 1;
			_putchar(d + 48);
			if (c >= 10)
				_putchar(c - 10 + 48);
		}
		_putchar('\n');
	}
}
