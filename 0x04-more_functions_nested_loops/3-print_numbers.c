#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return: null
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9 ; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
