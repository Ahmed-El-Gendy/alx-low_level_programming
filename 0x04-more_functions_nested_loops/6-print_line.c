#include "main.h"

/**
 * print_line - print ('_') n times
 * @n : the numper of times to print ('_')
 * Return: null
 */
void print_line(int n)
{
	char c = '_';
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
