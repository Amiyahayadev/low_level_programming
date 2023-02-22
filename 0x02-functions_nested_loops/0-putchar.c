#include "main.h"

/**
 * main - Entry point
 *@c: The character to print
 * Description - Print string
 * Return: Always 0 if (success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
