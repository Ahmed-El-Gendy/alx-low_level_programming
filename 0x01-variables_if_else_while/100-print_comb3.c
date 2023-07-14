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

	for ( ; c < 9 ; c++)
	{
		for (d = 1 ; d <= 9 ; d++)
		{
			putchar(c + 48);
			putchar(d + 48);
			if (c != 8 || d != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
