#include <stdio.h>
#include "main.h"
/**
 * get_bit - get the bit
 * @n: int
 * @index: index
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if ((1 << index) & n)
	{
		return (1);
	}
	return (0);
}
