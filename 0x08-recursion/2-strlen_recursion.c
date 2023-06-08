#include "main.h"

/**
 * _strlen_recursion - Prints a the lenght of a string recursively
 * @s: pointer to string
 * Return: total length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
