#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print a-Z
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	char cc = 'A';

	for ( ; c <= 'z' ; c++)
	{
		putchar(c);
	}

	for ( ; cc <= 'Z' ; cc++)
	{
		putchat(cc);
	}
	putchar('\n');
	return (0);

}
