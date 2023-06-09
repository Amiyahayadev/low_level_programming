#include "main.h"

/**
 * _puts - prints a string
 * @str: points to the string to be displayed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
