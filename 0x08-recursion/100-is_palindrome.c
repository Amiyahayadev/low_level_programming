#include "main.h"

/**
 * _strlen - function declaration
 * @s: string pointer
 * Return: lenth of string
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
 * is_palindrome - check if a given strin is a palindrome
 * @s - string to be cheked
 *
 * Return:  1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int ln;

	int res;

	ln = _strlen(s);
	if (ln <= 1)
		return (1);
	else if (s[0] != s[ln - 1])
		return (0);
	else
		s[ln - 1] = '\0';
		res = is_palindrome(s + 1);
		s[ln - 1] = s[0];
		return (res);
}
