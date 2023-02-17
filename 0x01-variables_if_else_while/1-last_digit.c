#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print last digit of a random number n
 *
 * Return - Always 0 if (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_dig;

	last_dig = n % 10;

	if (last_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	return (0);
}
