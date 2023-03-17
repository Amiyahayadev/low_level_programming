#include "main.h"
#include <stdlib.h>

/**
* *_calloc - function that allocates memory for an array like calloc
* @nmemb: number of elements of the array of int data type
* @size: number of bytes each element
* Return: a pointer to the allocated memory or NULL if allocation fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	/*check if no of elements or byte size is zero*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	/*proceed to initialize memory with 0*/
	/*pointer of type void* can't be used in arithmetic*/
	_memset(arr, 0, nmemb * size);

	return (arr);
}

/**
 * *_memset - fill a block of memory with a particular value
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting from ptr to be filled
 *
 * Return: a pointer to the memory area(s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		((char *)s)[i] = b;
	}
	return (s);
}
