#include "main.h"

/**
* _isupper - test if the char is upper
* @c : the value of char
* Return: 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
