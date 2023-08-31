#include <stdio.h>
#include "main.h"
/**
 * set_bit - set the bit to 1
 * @n: int
 * @index: index
 * Return: void
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = ((*n) | (1 << index));
	return (1);
}
