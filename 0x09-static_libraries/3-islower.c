#include "main.h"

/**
 * _islower - checks if a letter
 * is lowercase or not
 * @c: a variable that represents the ASCII code
 * of any letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
