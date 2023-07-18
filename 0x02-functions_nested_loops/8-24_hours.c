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
		_putchar(hrs / 10);
		_putchar(hrs % 10);
		hrs++;
		int min = 0;

		while (min < 60)
		{
			_putchar(min / 10);
			_putchar(min % 10);
			min++;
		}
	}
}
