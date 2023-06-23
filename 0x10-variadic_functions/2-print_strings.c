#include "variadic_functions.h"


/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of additional arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int first_iteration = 1;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (!first_iteration && separator != NULL)
		{
			printf("%s", separator);
		}
		if (va_arg(ap, char *) != NULL)
			printf("%s", va_arg(ap, char *));
		else
			printf("(nil)");

		first_iteration = 0;
	}
	va_end(ap);
	printf("\n");
}
