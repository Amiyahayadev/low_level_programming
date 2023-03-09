#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the square of n
 * @n - number to evaluate
 *
 * Return: the natural square root of n or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - checks if number has a natural square root
 * @i: variable data(Sq root)
 * @n: number
 *
 * Return: i, natural square root of a number
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
