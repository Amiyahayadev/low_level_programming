#include <stdlib.h>
#include "dog.h"

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
	dup[i] = '\0';
	return (dup);
}

/**
* *new_dog - creates a new dog variable
* @name: pointer to member of struct dog that holds string name
* @age: second member of struct, variable of type float
* @owner: pointer to third member of struct dog that holds string owner
* Return: pointer to the new dog_t variable/object or NULL if failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}


	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	return (my_dog);
}
