#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * Description: parameter type is constant pointer to a constant character
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	arg_v typ[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	unsigned int i, j;

	char *separator = "";

	va_list ap;

	va_start(ap, format);

	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (i < (sizeof(typ) / sizeof(typ[0])))
		{
			if (format[j] == typ[i].format)
			{
				printf("%s", separator);
				typ[i].print_function(ap);
				separator = ", ";
				break;
			}
			i++;
		}

		j++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints an argument as a character
 * @ap: pointer to variadic func argument
 * Return: nothing
 */
void print_char(va_list ap)
{
	char c = va_arg(ap, int);

	printf("%c", c);
}

/**
 * print_int - prints an argument as an integer
 * @ap: pointer to variadic func argument
 * Return: nothing
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints an argument as a float
 * @ap: pointer to variadic func argument
 * Return: nothing
 */
void print_float(va_list ap)
{
	float f = va_arg(ap, double);

	printf("%f", f);
}

/**
 * print_string -prints an argument as a string
 * @ap: pointer to variadic func argument
 * Return: noting
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

