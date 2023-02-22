#include "main.h"

/**
 * print_sign - prints the sign of a digit
 * Description: Get an entry from user and prints
 * whether it's positive, negative or zero
 * @n: type int integer
 * Return: 0 or 1 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
