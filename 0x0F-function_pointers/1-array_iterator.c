#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - will execute a function that takes in
 * an int parameter from the list of elements in an array
 * @array: pointer to the array of integers
 * @size: size of the array
 * @action: a pointer to the function you need
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || action == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
