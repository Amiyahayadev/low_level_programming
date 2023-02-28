#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return - nothing
 */
void rev_string(char *s)
{
	int i, j;

	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;
	j = i - 1;
	i = 0;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
