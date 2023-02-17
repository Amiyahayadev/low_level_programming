#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Check if n is positive or negative
 *
 * Return -Always 0 if (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n");
	else
		printf("%d id negative\n");
	return (0);
}
