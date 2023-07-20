#include "main.h"

/**
 * print_triangle - print ('#') as triangle
 * @n : the numper of times to print ('#')
 * Return: null
 */
void print_triangle(int n)
{
	int l = 0;
	int z;

	while (l < n && n > 0)
	{
		z = 0;
		while (z < n - l - 1)
		{
			_putchar(' ');
			z++;
		}
		int c = l;

		while (c >= 0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
		l++;
	}
	if (l == 0)
		_putchar('\n');
}
