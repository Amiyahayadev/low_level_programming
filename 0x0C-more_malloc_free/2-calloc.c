#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array of any data type,
 * using malloc and sets it to zero
 * @nmemb: number of elements to be contained in memory
 * @size: no of bytes for ech element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tsize;

	void *nstr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	tsize = size * nmemb;
	nstr = malloc(tsize);
	if (nstr == NULL)
		return (NULL);

	_memset(nstr, 0, tsize);

	return (nstr);
}


/**
 * _memset - sets a block of memory to a specific value
 * Description: sets the memory block starting from nstr
 * with a length of 'tsize' bytes to zero
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled
 *
 * Return: a pointer to the memory area(s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

