#include <stdio.h>

/**
 * main - Entry point
 * Description - Printing lower and uppercase
 * Return: Always 0 (Success)
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
	h = 'A';
	while (h <= 'Z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);	
}
