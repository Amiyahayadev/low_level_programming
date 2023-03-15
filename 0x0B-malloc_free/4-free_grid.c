#include "main.h"
#include <stdlib.h>

/**
* free_grid - program that frees up entire 2-D array
* @grid: pointer to array of pointers
* @height: number of rows or subarrays
* Return: void
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free[grid];
}
