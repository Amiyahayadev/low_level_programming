#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory after use
 * @d: pointer to dog structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
