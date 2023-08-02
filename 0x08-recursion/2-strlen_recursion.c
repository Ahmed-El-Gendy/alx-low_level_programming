#include "main.h"

/**
 * _print_rev_recursion - function that prits size of string
 * @*s: pointer to string
 * Return: size of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
