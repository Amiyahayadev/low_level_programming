#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

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

	my_dog->name = name ? strdup(name) : NULL;
	my_dog->age = age;
	my_dog->owner = owner ? strdup(owner) : NULL;

	return (my_dog);
}
