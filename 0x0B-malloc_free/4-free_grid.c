#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees all successfully allocated memory blocks
 * @grid: pointer to the 2D memory block
 * @height: no of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
