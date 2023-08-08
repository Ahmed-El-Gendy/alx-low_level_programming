#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: int
 * @height: int
 * Return: NULL if empty or pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **s, r, c;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		s[r] = malloc(sizeof(int) * width);
		if (s[r] == NULL)
		{
			free(s);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			s[r][c] = 0;
		}

	}
	return (s);
}
