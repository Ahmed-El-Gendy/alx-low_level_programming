#include "main.h"
/**
 * times_table - table
 *
 * Return: null
 */

void times_table(void)
{
	int hrs = 0;

	while (hrs < 10)
	{
		int mi = 0;

		while (mi < 10)
		{
			if (mi == 0)
			{
				_putchar('0' + hrs * mi);
			}
			else if (hrs * mi < 10)
			{
				_putchar(' ');
				_putchar('0' + (hrs * mi));
			}
			else
			{
				_putchar('0' + (hrs * mi) / 10);
				_putchar('0' + (hrs * mi) % 10);
			}
			if (mi < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			mi++;
		}
		_putchar('\n');
		hrs++;
	}
}
