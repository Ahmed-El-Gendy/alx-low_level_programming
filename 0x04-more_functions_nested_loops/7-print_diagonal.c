#include "main.h"

/**
 * print_diagonal - print ('\') n times diagonaly
 * @n : the numper of times to print ('\')
 * Return: null
 */
void print_diagonal(int n)
{
	int l = 0;
	int z;

	while (l < n && n > 0)
	{
		z = 0;
		while (z < l)
		{
			_putchar(' ');
			z++;
		}
		_putchar('\\');
		_putchar('\n');
		l++;
	}
	if (l == 0)
		_putchar('\n');
}
