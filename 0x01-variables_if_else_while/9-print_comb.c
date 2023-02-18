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
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		if(a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
