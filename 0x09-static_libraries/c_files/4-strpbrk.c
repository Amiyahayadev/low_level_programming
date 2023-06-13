#include "main.h"

/**
 * _strpbrk - finds the first character in s that matches any of the bytes
 * accept, This does not include the terminating null-characters
 * @s: the C string to be scanned
 * @accept: the C string containing the characters to match
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 * or Null if  no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
