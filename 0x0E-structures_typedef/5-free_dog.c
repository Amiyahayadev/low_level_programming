#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees all successfully allocated memory
* @d: pointer to the dog structure passed
* Return: void
*/
void free_dog(dog_t *d)
{
	/*checks if the pointer to the dog structure is not NULL*/
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

