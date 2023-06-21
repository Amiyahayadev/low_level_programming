#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: pointer to name string
 * @f: funtion pointer to function that takes pointer to char
 * as argument and returns nothing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
