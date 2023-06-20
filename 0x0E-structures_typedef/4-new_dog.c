#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to create new struct dog variable
 * @name: pointer to name string argument
 * @age: age variable
 * @owner: pointer to owner string argument
 * Return: pointer to the new dog struct variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	/* Check if memory failed, return from function*/
	newDog->name = _strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner =  _strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	if (age != -1)
		newDog->age = age;
	else
		return (NULL);

	return (newDog);
}

/**
 * _strdup - creates duplicate of a string in a newly alloacted memory
 * @str: pointer to original string
 * Return: pointer to deplicate string
 */

char *_strdup(char *str)
{
	char *dstr;

	unsigned int ln;

	if (str == NULL)
		return (NULL);

	ln = _strlen(str) + 1;
	dstr = malloc(ln);
	if (dstr == NULL)
		return (NULL);

	/* Initialize memory */
	dstr = _memcpy(dstr, str, ln);
	return (dstr);
}

/**
 * _memcpy - copies n characters from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * where the content is to be copied.
 * @src: pointer to the source of data to be copied
 * @n: total number of bytes to be copied including null byte
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 * Return: the actual length of the string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	;

	return (len);
}
