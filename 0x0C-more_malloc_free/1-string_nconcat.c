#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: orgininallfirst string
 * @s2:  second string of n bytes
 * Return: 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, k;

	char *cstr;

	unsigned int ln1, ln2, ln3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	if (n >= ln2)
		k = ln2;
	else
		k = n;
	
 	ln3 = ln1 + k + 1;	
	cstr = malloc(ln3);
	if (cstr == NULL)
		return (NULL);

	for (i = 0; i < ln1; i++)
	{
		cstr[i] = s1[i];
	}
	
	for (j = 0; j < k; j++)
	{
		cstr[i + j] = s2[j];
	}
	cstr[ln3 - 1] = '\0';
	return (cstr);
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
