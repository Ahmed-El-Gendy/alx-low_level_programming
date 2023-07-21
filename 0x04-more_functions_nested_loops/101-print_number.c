#include "main.h"

/**
 * print_number - print the numper
 * @n : the input numper
 * Return: null
 */
void print_number(int n)
{
	int x = n;
	int numd = 0;

	if (x < 0)
	{
		x = -1 * x;
		n = -1 * n;
		_putchar('-');
	}
	if (x == 0)
	{
		_putchar('0');
	}
	else
	{

		while (n > 0)
		{
			numd++;
			n = n / 10;
		}

		numd--;
		int is = 1;

		while (numd--)
			is *= 10;

		while (is > 0)
		{
			_putchar('0' + (x / numd));
			x -= (x / is) / is;
			is /= 10;
		}
	}
}
