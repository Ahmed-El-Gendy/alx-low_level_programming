#include "main.h"
/**
 * print_to_98 - add
 *@a : the first num
 *
 * Return: null
 */

void print_to_98(int a)
{
	while (a <= 98)
	{
		if (a < 10)
		{
			_putchar('0' + a);
		}
		else
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
		}
		_putchar(',');
		_putchar(' ');
		a++;
	}
}
