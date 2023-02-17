#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints the alpha in lowercase
 *
 * Return: Always value (Success)
 */
int main(void)
{
	char h;

	h = 'a';
	while (h <= 'z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
