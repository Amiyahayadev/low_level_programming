#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory dynamically to any data type
 * @b: size of memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ma;

	ma = malloc(b);
	if (ma != NULL)
	{
		return ((void *)ma);
	}
	else
		exit(98);
}
