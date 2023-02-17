#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print last digit of a random number n
 * Return - Always 0 if (success)
 */
int main(void)
{
	int n;
	int lDig = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lDig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lDig);
	else if (lDig == 0)
		printf("Last digit of %d is %d and is 0\n", n, lDig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDig);
	return (0);
}
