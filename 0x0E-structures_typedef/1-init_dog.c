#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this function initializes variable of type struct dog
 * @d: address of struct dog variable (pointer to struct dog)
 * @name: pointer to name string
 * @age: integer variable to store age
 * @owner: pointer to owner string
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* allocate mem for each string in struct dog */
	d->name = _strdup(name);
	d->owner = _strdup(owner);

	/* initialize each field of struct dog my_dog*/
	d->age = age;
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
	dstr = malloc(sizeof(char) * ln);

	if (dstr == NULL)
		return (NULL);

	dstr = _memcpy(dstr, str, ln);
	return (dstr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 * Return: the actual length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _memcpy - copies n characters from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * where the content is to be copied.
 * @src: pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

