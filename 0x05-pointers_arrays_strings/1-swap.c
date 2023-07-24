#include "main.h"

/**
 * swap_int - swap two integers
 * @a:  is the int that will use for the argument of the function
 * @b:  is the int that will use for the argument of the function
 * Return: NULL
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
