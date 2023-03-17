#include <stdlib.h>
#include "main.h"

/**
* @*malloc_checked - program that that allocates memory using malloc
*
*/
void *malloc_checked(unsigned int b)
{
	if(void * malloc(b) != NULL)
	{
		return (void *);
	}
	else
		exit(98);
}
