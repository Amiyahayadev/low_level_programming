#include "main.h"
int find_prime_numb(int n, int q);

/**
 * find_prime_numb - performs the recursive calculations
 * @n: number to check if it's prime
 * @q: divisor currently being checked
 * Return: a recursive call that decrements the divisor
 */
int find_prime_numb(int n, int q)
{
	if (q == 1)
		return (1);
	else if (n % q == 0)
		return (0);
	else
		return (find_prime_numb(n, q - 1));
}



/**
 * is_prime_number - function that initializes parameter of divisor
 * @n: @n: number to check if it's prime
 * Return: a call to the main recursive function
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_prime_numb(n, n - 1));
}
