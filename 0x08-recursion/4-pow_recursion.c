#include "main.h"

/**
 * _pow_recursion - Calculates the positive power of number
 * @x: number
 * @y: positive power
 * Return: resultant power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
