#include "main.h"

/**
 * print_square - print ('#') n times diagonaly
 * @size : the size of ('#') square
 * Return: null
 */
void print_square(int size)
{
	int l = 0;
	int z;

	while (l < n && n > 0)
	{
		z = 0;
		while (z < n)
		{
			_putchar('#');
			z++;
		}
		_putchar('\n');
		l++;
	}
	if (l == 0)
		_putchar('\n');
}
