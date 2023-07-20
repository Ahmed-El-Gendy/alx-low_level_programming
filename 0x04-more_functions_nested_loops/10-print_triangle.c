#include "main.h"

/**
 * print_triangle - print ('#') as triangle
 * @size : the numper of times to print ('#')
 * Return: null
 */
void print_triangle(int size)
{
	int l = 0;
	int z;

	while (l < size && size > 0)
	{
		z = 0;
		while (z < size - l - 1)
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
