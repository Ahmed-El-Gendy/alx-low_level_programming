#include "main.h"
/**
 * print_last_digit - 3 colors
 * @n : int to check the case
 * Return: value
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = -1 * l;
	}
	_putchar(l + '0');

	return (l);
}
