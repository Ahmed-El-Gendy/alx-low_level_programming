#include "main.h"
#include <stdio.h>

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
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}


	_putchar('\n');
}
