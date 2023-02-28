#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
