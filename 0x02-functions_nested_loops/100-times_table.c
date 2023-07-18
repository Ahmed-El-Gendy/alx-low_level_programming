#include "main.h"
/**
 * print_times_table - table
 *@n : the num
 * Return: null
 */

void print_times_table(int n)
{
	int hrs = 0, mi;

	if (n > 15 || n < 0)
		return;

	while (hrs <= n)
	{
		for (mi = 0; mi <= n; mi++)
		{
			if (mi == 0)
				_putchar('0' + hrs * mi);
			else if (hrs * mi < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (hrs * mi));
			}
			else if (hrs * mi < 100)
			{
				_putchar(' ');
				_putchar('0' + (hrs * mi) / 10);
				_putchar('0' + (hrs * mi) % 10);
			}
			else
			{
				_putchar('0' + (hrs * mi) / 100);
				_putchar('0' + ((hrs * mi) - 100) / 10);
				_putchar('0' + (hrs * mi) % 100);
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
