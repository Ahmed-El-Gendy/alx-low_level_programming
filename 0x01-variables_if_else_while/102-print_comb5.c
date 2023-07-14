#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - (01-89)
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;
	int f;
	int l;
	int c2;
	int f2;
	int l2;

	while (c < 99)
	{
		f = (c / 10 + 48);
		l = (c % 10 + 48);
		c2 = 0;
		while (c2 <= 99)
		{
			f2 = (c2 / 10 + 48);
			l2 = (c2 % 10 + 48);

			if (c < c2)
			{
				putchar(f);
				putchar(l);
				putchar(' ');
				putchar(f2);
				putchar(l2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
