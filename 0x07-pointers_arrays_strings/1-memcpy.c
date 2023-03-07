#include "main.h"

/**
 * _memcpy - copies n characters from memory area src to memory area dest
 * @dest: pointer to the destination array/memory area
 * where the content is to be copied.
 * @src: pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
