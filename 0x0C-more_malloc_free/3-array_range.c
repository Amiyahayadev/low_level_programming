#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers of a certain range
 * @min: smallest number of elements the array could have
 * @max: highest range of elements the array
 * Return: pointer to the newly allocated array
 */
int *array_range(int min, int max)
{
	int i, range;

	int *narr;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	narr = malloc(range * sizeof(int));
	if (narr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		*(narr + i) = min + i;

	return (narr);
}

