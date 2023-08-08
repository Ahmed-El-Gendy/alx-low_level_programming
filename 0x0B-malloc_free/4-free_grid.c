#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2d array
 * @grid: pointer to 2D arrays
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}

