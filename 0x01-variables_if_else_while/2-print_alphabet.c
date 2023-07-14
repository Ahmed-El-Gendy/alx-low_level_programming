#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check char
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	for ( ; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
