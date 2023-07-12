#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates new mem
 * @ptr: pointer to old allocated memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	newPtr = malloc(new_size);
	if (!newPtr)
		return (NULL);

	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			newPtr[i] = old_ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			newPtr[i] = old_ptr[i];
	}
	free(old_ptr);
	return (newPtr);
}
