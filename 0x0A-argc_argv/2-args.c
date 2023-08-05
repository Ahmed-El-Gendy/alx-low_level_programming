#include <stdio.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
