#include "main.h"

/**
 * print_binary - converts decimal to binary and prints
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/*Variable to track leading zeros*/
	int i, leading_zero = 1;

	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
			leading_zero = 0;/*encountered non-zero val*/
		if (!leading_zero)
			_putchar(((n >> i) & 1) ? '1' : '0');
	}
	/*Print a single '0' if the number is zero*/
	if (leading_zero)
		_putchar('0');
}
