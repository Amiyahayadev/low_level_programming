#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print from 'z' to 'a'
 *
 * Return: Always 0 if (success)
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
