#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - reverse char
 *
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	for ( ; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
