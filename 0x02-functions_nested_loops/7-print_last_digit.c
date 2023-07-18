#include "main.h"
/**
 * print_last_digit - 3 colors
 * @n : int to check the case
 * Return: value
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n % 10);
}
