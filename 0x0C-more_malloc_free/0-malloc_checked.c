#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - program that that allocates memory using malloc
* @b: size of bytes to allocate
* Return: pointer to the address of allocated memory
* if malloc fails,function exits with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if(p != NULL)
	{
		return (p);
	}
	else
		exit(98);
}
