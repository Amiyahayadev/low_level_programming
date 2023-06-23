#include "variadic_functions.h"

/**
 * print_char - prints an argument as a character
 * @arg: pointer to variadic func argument
 * Return: nothing
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - prints an argument as an integer
 * @arg: pointer to variadic func argument
 * Return: nothing
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints an argument as a float
 * @arg: pointer to variadic func argument
 * Return: nothing
 */
void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string -prints an argument as a string
 * @arg: pointer to variadic func argument
 * Return: noting
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

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
				typ[i].print_function(ap);
				if (i < ((sizeof(typ) / sizeof(typ[0])) - 1))
					printf(", ");
				break;
			}
			i++;
		}

		j++;
	}
	va_end(ap);
	printf("\n");
}
