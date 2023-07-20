#include "main.h"

/**
* _isdigit - test if the num between 0 and 9
* @c : the value of num
* Return: 1 or 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
