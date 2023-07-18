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
			if (hrs * mi < 10)
			{
				_putchar('0' + hrs * mi);
			}
			else
			{
				_putchar('0' + (hrs * mi) / 10);
				_putchar('0' + (hrs * mi) % 10);
			}
			if (mi == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (hrs * mi < 10)
				{
					_putchar(' ');
				}
			}
			mi++;
		}
		hrs++;
	}
}
