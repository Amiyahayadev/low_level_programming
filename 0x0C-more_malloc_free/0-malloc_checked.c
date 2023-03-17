#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - program that that allocates memory using malloc
* @b: size of bytes to allocate
* Return: pointer to the address of first element
*/
void *malloc_checked(unsigned int b)
{
	if(malloc(b) != NULL)
	{
		return (void *);
	}
	else
		exit(98);
}
