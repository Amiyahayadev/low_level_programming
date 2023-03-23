#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
* print_dog - function that prints a struct dog
* @d: points to the struct dog variable passes as argument
* Return: void
*/
void print_dog(struct dog *d)
{
	/* check if null pointer is passed */
	if (d == NULL)
		return;
	
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
