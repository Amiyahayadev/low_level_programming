#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees all successfully allocated memory
*
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

