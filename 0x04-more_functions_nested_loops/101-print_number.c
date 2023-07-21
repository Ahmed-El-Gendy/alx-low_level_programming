#include "main.h"

/**
 * print_number - print the numper
 * @n : the input numper
 * Return: null
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		x = -1 * x;
		_putchar('-');
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + '0');

}
