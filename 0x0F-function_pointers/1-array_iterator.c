#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of int
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size > 0 && action)
	{
		int i = 0;

		while (i < size)
		{
			action(array[i]);
		}

	}
}
