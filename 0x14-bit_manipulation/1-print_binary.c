#include <stdio.h>
#include "main.h"
/**
 * print_binary - convert from decimal to binary
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int is;

	is = 1;
	i = 1;
	while (i < n)
		(i = i << 1);
	if (i == 1)
	{
		_putchar('0' + (i & n));
		return;
	}
	while (i > 0)
	{
		if (i & n)
		{
			_putchar('1');
			is = 1;
		}
		else if (is)
			_putchar('0');
		i = (i >> 1);
	}
}
