#include "main.h"
/**
 * jack_bauer - time
 *
 * Return: null
 */

void jack_bauer(void)
{
	int hrs = 0;

	while (hrs <= 23)
	{
		_putchar('0' + (hrs / 10));
		_putchar('0' + (hrs % 10));
		hrs++;
		int mi = 0;

		while (mi < 60)
		{
			_putchar('0' + (mi / 10));
			_putchar('0' + (mi % 10));
			min++;
		}
	}
}
