#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer that matches a case
 * @array: array of integers to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp function
 * does not return 0  or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int int_index;

	if (!array || cmp == NULL || size <= 0)
		return (-1);

	for (int_index = 0; int_index < size; int_index++)
	{
		if (cmp(array[int_index]) != 0)
		{
			return (int_index);
		}
	}
	return (-1);
}
