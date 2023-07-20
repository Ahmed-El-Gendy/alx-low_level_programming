#include "main.h"

/**
 * print_diagonal - print ('\') n times diagonaly
 * @n : the numper of times to print ('\')
 * Return: null
 */
void print_diagonal(int n)
{
	int l;
	int z;

	for (l = 0; l < n; l++)
	{
		for (z = 0; z < l; z++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n == 0)
		_putchar(' ');
}
