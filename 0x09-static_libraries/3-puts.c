#include "main.h"

/**
 * _puts - prints a string
 * @str: points to the string to be displayed
 *
 * Return: nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
