#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str:  is the string that will use for the argument of the function
 * Return: NULL
 */
void _puts(char *str)
{
	int i;

	for (i = 0;; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		_putchar(s[i]);
	}
	_putchar('\n');
}
