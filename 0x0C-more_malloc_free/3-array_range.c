#include <stdlib.h>
#include "main.h"

/**
* *array_range - function that creates an int array of certain range
* @min: from min end (included)
* @max: to max end (included)
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *array;

	int j;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (j = 0; j <= (max - min); j++)
	{
		array[j] = min + j;
	}
	return (array);
}
