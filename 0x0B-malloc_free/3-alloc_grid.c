#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that return a *p to a 2 dim array of ints
 *
 * @width: the width of the array
 * @height: the height of the array
 * Return: return a *p if success otherwse return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width == 0 || height == 0)
		return (0);
	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (0);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (!grid[h])
			return (0);
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
