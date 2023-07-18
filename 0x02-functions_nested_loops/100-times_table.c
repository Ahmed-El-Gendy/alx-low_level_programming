#include "main.h"
/**
 * print_times_table - table
 *@n : the num
 * Return: null
 */

void print_times_table(int n)
{

int a = 0, re, b;

if (n < 0 || n > 15)
	return;
while (a <= n)
{
	for (b = 0; b <= n; b++)
	{
		re = a * b;
		if (b == 0)
			_putchar('0' + re);
		else if (re < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + re);
		}
		else if (rep < 100)
		{
			_putchar(' ');
			_putchar('0' + re / 10);
			_putchar('0' + re % 10);
		}
		else
		{
			_putchar('0' + re / 100);
			_putchar('0' + (re - 100) / 10);
			_putchar('0' + re % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	a++;
}
}
