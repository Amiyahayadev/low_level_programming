#include "main.h"
int find_a_sqrt(int n, int i);

/**
 * find_a_sqrt - mainly calculates the natural square root
 * @n: number to which square root is to be found
 * @i: the current value being checked
 * Return: a recursive call with incremented value of i
 */
int find_a_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_a_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - initializes the parameter of the recursive function
 * and checks for negative numbers
 * @n: number to which square root is to be found
 * Return: returns a call to the main recursive function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_a_sqrt(n, 1));
}
