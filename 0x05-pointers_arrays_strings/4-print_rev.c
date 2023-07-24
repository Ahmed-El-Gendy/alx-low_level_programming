#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @str:  is the string that will use for the argument of the function
 * Return: NULL
 */
void _puts(char *str)
{
	int i;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
	}

	i--;

	while (i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
