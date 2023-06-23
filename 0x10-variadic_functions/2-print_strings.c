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

	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
