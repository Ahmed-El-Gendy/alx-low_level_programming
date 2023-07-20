#include "main.h"

/**
 * print_triangle - print ('#') as triangle
 * @size : the numper of times to print ('#')
 * Return: null
 */
void print_triangle(int size)
{
	int l = 1;
	int z;

	while (l <= size && size > 0)
	{
		z = 0;
		while (z < size - l)
		{
			_putchar(' ');
			z++;
		}
		z = 0;
		while (z < l)
		{
			_putchar('#');
			z++;
		}
		_putchar('\n');
		l++;
	}
	if (l == 1)
	{
		_putchar('\n');
	}
}
