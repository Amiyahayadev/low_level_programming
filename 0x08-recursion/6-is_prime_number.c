#include "main.h"

int prime_only(int n, int i);

/**
 * is_prime_number - checks an input for a prime number
 * @n: number to be checked
 *
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_only(n, n - 1));
}

/**
 * prime_only - determines if n is prime recursively
 * @n: number to be checked
 * @i: divisor(variable data)
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_only(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_only(n, i - 1));
}
