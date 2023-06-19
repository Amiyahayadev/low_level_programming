#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog variable
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		 exit(98);
	}

	if (d->name != NULL)
		 printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");

	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");

	if (d->owner != NULL)
		 printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
