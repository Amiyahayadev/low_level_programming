#include "main.h"

/**
 * print_line - function definition
 * Description: print dashes as many as n times
 * @n: number of dashes
 * Return: has none
 */

void print_line(int n)
{
	int counter = 0;

	while (n > 0 && counter < n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}
