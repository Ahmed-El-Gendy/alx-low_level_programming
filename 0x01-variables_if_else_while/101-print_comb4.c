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
	int d = 1;
	int f = 0;

	for ( ; c < 8 ; c++)
	{
		for (d = c + 1 ; d <= 8 ; d++)
		{
			for (f = d + 1 ; f <= 9 ; f++)
			{
				putchar(c + 48);
				putchar(d + 48);
				putchar(f + 48);
				if (c != 7 || d != 8 || f != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
