#include "main.h"
/**
 * print_times_table - table
 *@n : the num
 * Return: null
 */

void print_times_table(int n)
{
	int hrs = 0, mi,s;

	if (n > 15 || n < 0)
		return;

	while (hrs <= n)
	{
		for (mi = 0; mi <= n; mi++)
		{
			s = a * b;
			if (mi == 0)
				_putchar('0' + s);
			else if (s < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + s);
			}
			else if (s < 100)
			{
				_putchar(' ');
				_putchar('0' + s / 10);
				_putchar('0' + s % 10);
			}
			else
			{
				_putchar('0' + (s / 100));
				_putchar('0' + (( - 100) / 10));
				_putchar('0' + (s % 100));
			}
			if (mi < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		hrs++;
	}
}
