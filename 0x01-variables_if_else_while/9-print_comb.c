#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - (0,9)
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;

	for ( ; c < 10 ; c++)
	{
		putchar(c + 48);
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
