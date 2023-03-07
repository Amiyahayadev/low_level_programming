#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 * which consists entirely of characters in accept
 * @s: main C string to be scanned
 * @accept: string containing the list of characters to match in s
 *
 * Return: number of bytes in the initial segment of s
 * with only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++ )
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (n);
	}
	return (n);
}
