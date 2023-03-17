#include "main.h"
#include <stdlib.h>

/**
* *_calloc - function that allocates memory for an array like calloc
* @n: number of elements of the array of int data type
* @size: number of bytes each element
* Return: a pointer to the allocated memory or NULL if allocation fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	
	unsigned int i;

	/*check if no of elements or byte size is zero*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	/*proceed to initialize memory with 0*/

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
