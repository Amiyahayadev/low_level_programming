#include <stdio.h>

/**
 * main - Entry point
 * Description - Printing lower and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
