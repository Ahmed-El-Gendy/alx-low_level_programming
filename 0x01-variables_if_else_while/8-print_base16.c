#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - (0-9)
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;
	char a = 'a';

	for ( ; c < 10 ; c++)
	{
		putchar(c + 48);
	}
	for ( ; a <= 'f' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
