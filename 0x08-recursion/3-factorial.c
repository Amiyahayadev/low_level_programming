#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates factorial
 * @n: number to pass as input
 *
 * Return: 1, -1 or factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
