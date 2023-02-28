#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	char *p = s;

	/* Find the length of the string */
	while (*p != '\0')
	{
		len++;
		p++;
	}
	/* Print the string in reverse */
	for (int i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
