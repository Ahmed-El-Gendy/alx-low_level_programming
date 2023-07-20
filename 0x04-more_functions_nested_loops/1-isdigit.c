#include "main.h"

/**
 * _isdigit - checks if the char is integer
 * @c:  is the int that will use for the argument of the function
 * Return: 1 if uppercase character 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
