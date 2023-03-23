#include <stdio.h>
#include "dog.h"

/**
* init_dog - funtion that initializes variable of type struct dog
* @d: pointer to the struct variable to be initialized,
* Must check whether the d parameter is NULL before trying to dereference it
* @name: char pointer to member of struct dog
* @age: second member of struct, variable of type float
* @owner: char pointer to third member of struct dog
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
