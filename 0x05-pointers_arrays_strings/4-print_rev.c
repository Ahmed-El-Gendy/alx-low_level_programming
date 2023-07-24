#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s:  is the string that will use for the argument of the function
 * Return: NULL
 */
void _puts(char *s)
{
	int i;

	for (i = 0;; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}

	i--;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
