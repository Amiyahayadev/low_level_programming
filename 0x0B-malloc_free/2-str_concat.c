#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings into
 * a new memory location
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;

	char *nstr;

	unsigned int ln1, ln2, ln3;

	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	ln3 = ln1 + ln2 + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	nstr = malloc(ln3);
	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < ln1; i++)
	{
		nstr[i] = s1[i];
	}
	for (j = 0; j < ln2; j++)
	{
		nstr[i + j] = s2[j];
	}
	nstr[ln3 - 1] = '\0';
	return (nstr);
}

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
