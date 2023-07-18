#include "main.h"
/**
 * print_alphabet - alphabets
 *
 * Return: null
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
