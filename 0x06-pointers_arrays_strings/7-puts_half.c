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
	int n;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
	}

	if (i % 2 == 0)
	{
		for (v = i / 2; str[v] != '\0'; v++)
		{
			_putchar(str[v]);
		}
	}
	else
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}


	_putchar('\n');
}
