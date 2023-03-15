#include <stdlib.h>
#include "main.h"

/**
* *create_array - Creates an array of any length and
* initializes it with a specific character
* @size: variable to hold no of bytes to allocate
* @c: specific character to initialize with
*
* Return: pointer to the created array
*/
char *create_array(unsigned int size, char c)
{
	char *ar;

	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
