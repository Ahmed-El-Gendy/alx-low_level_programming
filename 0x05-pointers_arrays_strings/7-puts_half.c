#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str:  is the string that will use for the argument of the function
 * Return: NULL
 */
void puts2(char *str)
{
	int i;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
	}

	int v = i / 2;

	while (i > v)
	{
		_putchar(str[v]);
		v++;
	}

	_putchar('\n');
}
