#include <stdio.h>

/**
 *main - Entry point
 *
 *Description - Print hexadecimals
 *
 *Return: Always 0 if (success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 16)
	{
		if (x < 10)
			putchar(x + '0');
		else
			putchar('a' + x - 10);
		x++;
	}
	putchar('\n');
	return (0);
}
