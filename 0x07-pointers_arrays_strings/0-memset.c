#include "main.h"

/**
 * _memset - fill a block of memory with a particular value
 * @s - Starting address of memory to be filled 
 * @b - Value to be filled
 * @n - Number of bytes to be filled starting from ptr to be filled
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
