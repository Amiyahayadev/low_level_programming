#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: number of additional arguments
 * Return: total sum on SUCCESS or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int t_sum;

	unsigned int i;

	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	t_sum = 0;
	for (i = 0; i < n; i++)
	{
		t_sum += va_arg(ap, int);
	}
	va_end(ap);

	return (t_sum);
}
