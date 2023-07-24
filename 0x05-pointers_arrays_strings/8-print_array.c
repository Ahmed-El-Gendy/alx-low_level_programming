#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n:  is the num of elements
 * @a: the array
 * Return: NULL
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}


	_putchar('\n');
}
