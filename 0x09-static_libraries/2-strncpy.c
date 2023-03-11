#include "main.h"

/**
 * _strncpy - Only specified number of  n characters are copied
 * @n: no of bytes to copy
 * @dest: points to destination string
 * @src: points to source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
