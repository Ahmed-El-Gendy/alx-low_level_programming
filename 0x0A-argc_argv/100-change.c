#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, least = 0, money = atoi(argv[1]);
	int cent[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cent[i])
		{
			least += money / cent[i];
			money %= cent[i];
			if (money % cent[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n",least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
