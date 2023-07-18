#include "main.h"
/**
 * print_alphabet_x10 - alphabets
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{

		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		a++;
		_putchar('\n');
	}
}
