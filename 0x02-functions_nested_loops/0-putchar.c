#include "main.h"

/**
 * main - Entry point
 * Description - The character to print
 * Return: Always 0 if (success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
