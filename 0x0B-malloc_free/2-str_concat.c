#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the actual length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* *str_concat - program concatenates two strings
* @s1: first string to add
* @s2: second string to append
* return: pointer to a newly allocated space in memory
*/

char *str_concat(char *s1, char *s2)
{
	char *s3c;

	int l1, l2, l3;

	int r, j;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3 = l1 + l2 + 1;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	s3c = malloc(sizeof(char) * l3);
	if (s3c == NULL)
		return (NULL);

	for (r = 0; r < l1; r++)
		s3c[r] = s1[r];
	for (j = 0; j < l2; j++)
		s3c[r + j] = s2[j];

	s3c[r + j] = '\0';
	return (s3c);
}
