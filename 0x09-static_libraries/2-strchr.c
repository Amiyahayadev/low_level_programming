#include "main.h"

/**
 * _strchr - searches for the first occurrence of the character c
 * (an unsigned char) in the string pointed to by the argument s
 * @s: the C string to be scanned
 * @c: the character to be searched in s
 *
 * Return: a pointer to the first occurrence of c, or 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
