#include "search_algos.h"

/**
 * binary_search - binary_search
 * @array: the array
 * @size: the size
 * @value: the value for search
 * Return: index or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, ll = 0, rr = size;

	if (!array)
	{
		return (-1);
	}
	while (l <= r)
	{
		ll = l;
		rr = r;
		printf("Searching in array: ");
		while (ll < rr)
		{
			printf("%d, ", array[ll]);
			ll++;
		}
		printf("%d\n", array[ll]);
		mid = (l + r) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
