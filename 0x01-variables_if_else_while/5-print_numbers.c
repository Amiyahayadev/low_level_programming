#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print from 0 to 9
 *
 * Return: Always 0 if (success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
