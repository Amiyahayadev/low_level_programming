#include "main.h"

/**
 * _sqrt_recursion - Frinds square
 * @n - number to find
 *
 * Return: the natural square root of n or -1
 */
int sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	return sqrt_helper();
}

/**
 * sqrt_helper - checks if the square of the current number
 * i is greater than the given number n
 * @i: increment
 * @n: number
 *
 * Return: square root of  natural square root
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (0);
	return (sqrt_helper(n, i + 1))
}
