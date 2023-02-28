#include "main.h"

/**
 * _strlen - function declaration
 * @s: string pointer
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
