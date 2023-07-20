#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of # size to be printed
 * Return:void
 */
void print_square(int n)
{
	int i = 0, z;

	while (i < n && n > 0)
	{
		z = 0;
		while (z < n)
		{
			_putchar('#');
			z++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
