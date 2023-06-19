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
	d->name = malloc(_strlen(name) + 1);
	d->owner = malloc(_strlen(owner) + 1);

	/* initialize each field of struct dog my_dog*/
	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
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
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string to a buffer
 * @dest: Buffer to copy to
 * @src: String to copy
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
