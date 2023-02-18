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
	int a = 0, b = 0;

	while (a < 10)
	{
		b = a;
		while (b < 10)
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
			putchar(b + '0');
			b++;
		}
		a++;
	}
	return (0);
}
