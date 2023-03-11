#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the actual length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcmp - compares ascii values of two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: three different values after the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int res, i;

	int sl1, sl2;

	res = 0;
	sl1 = _strlen(s1);
	sl2 = _strlen(s2);

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	if (res == 0 && sl1 != sl2)
		res = sl1 - sl2;

	return (res);
}
