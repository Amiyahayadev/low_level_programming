#include "main.h"

/**
 * _strncat - Only n characters are copied from
 * src to dest unless src is shorter than n
 * @n: no of bytes to copy
 * @dest: points to destination string
 * @src: points to source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	int dest_len;

	p = dest;

	dest_len = 0;
	while (*p != '\0')
	{
		dest_len++;
		p++;
	}

	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}

	*p = '\0';
	return (dest);
}
