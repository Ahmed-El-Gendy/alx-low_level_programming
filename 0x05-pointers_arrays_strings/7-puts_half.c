#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str:  is the string that will use for the argument of the function
 * Return: NULL
 */
void puts_half(char *str)
{
	int i;
	int v;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
	}
	i--;
	v = (i) / 2;

	while (i > v)
	{
		_putchar(str[v]);
		v++;
	}

	_putchar('\n');
}
