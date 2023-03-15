#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - program allocates memory to a 2-D array of integers
* @height: number of rows or size of first dimension(subarray)
* @width: number of columns or grid cells
*
* Return: a pointer to a 2-D array of integers
*/
int **alloc_grid(int width, int height)
{
	/*declare pointer to array of pointers*/
	int **grid;

	/*declare indices for row & col*/
	int x, y;

	/*allocate memory for each pointer to the subarray*/
	grid = malloc(sizeof(int *) * height);

	/*check if height or width is zero/negative*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*check if memory allocation failed*/
	if (grid == NULL)
		return (NULL);
	/*Initialize memory for each subarray with its pointer*/
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		/*check for memory allocation for subarray*/
		if (grid[x] == NULL)
		{
		/*if allocation fails, free up all previously allocated memo*/
			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
