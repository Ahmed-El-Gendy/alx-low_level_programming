#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to function
 * Return: index or (-1) if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size > 0 && cmp)
	{
		int i = 0;

		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (1);
			}
		}
		return (-1);

	}
	return (-1);
}
