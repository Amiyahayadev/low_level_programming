#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional array and initializes it
 * @width: represents no of columns
 * @height: represents no of rows
 * Return: a pointer to the 2D array memory block
 */
int **alloc_grid(int width, int height)
{
	int **tdarr;

	int i, k, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tdarr = malloc(height * sizeof(int *));
	if (tdarr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tdarr[i] = malloc(width * sizeof(int));
		if (tdarr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tdarr[j]);
			}
			free(tdarr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			tdarr[i][k] = 0;
		}
	}
	return (tdarr);
}

