#include "main.h"
/**
 * print_last_digit - 3 colors
 * @n : int to check the case
 * Return: value
 */

int print_last_digit(int n)
{
	n = _abs(n);
	n = n + n * 10;
	return (n % 10);
}
