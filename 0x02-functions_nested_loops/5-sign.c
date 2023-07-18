#include "main.h"
/**
 * print_sign - is postive
 * @n : int to check the case
 * Return:0 or 1 or -1
 */

int print_sign(int n)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
