#include <stdlib.h>
#include "main.h"

/**
* *array_range - function that creates an int array of certain range
* @min: from min (included)
* @max: to max (included), 
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *array;

	int j;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max + 1));
	if (array == NULL)
		return (NULL);

	for (j = 0; j < max + 1; j++)
	{
		if (j <= max || j >= min)
			array[j] = j;
	}
	return (array);
}
