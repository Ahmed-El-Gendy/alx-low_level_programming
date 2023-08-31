#include <stdio.h>
#include "main.h"
/**
 * print_binary - convert from decimal to binary
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
