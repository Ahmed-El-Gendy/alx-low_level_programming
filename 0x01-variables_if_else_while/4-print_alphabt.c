#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - without e - q
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	for ( ; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
