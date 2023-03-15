#include "main.h"
#include <stdlib.h>

/**
* *_strdup - program that duplicates a string
* @str: string given as a parameter
* Return: a pointer to the duplicated string or NULL
*/
char *_strdup(char *str)
{
	char *dup;

	int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}
