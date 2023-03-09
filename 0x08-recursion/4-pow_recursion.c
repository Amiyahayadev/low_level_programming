#include "main.h"

/**
 * _pow_recursion - computes x^y = x * x^(y-1)
 * @x: base value whose power is to be calculated
 * @y: the power value
 *
 * Return: result or power, 1 or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
