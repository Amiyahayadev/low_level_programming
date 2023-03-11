#include "main.h"

/**
 * _strcat - appends src stringnto dest string
 * @dest: points to destination string
 * @src: points to source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = dest;
	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
