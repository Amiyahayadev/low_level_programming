#include "main.h"

/**
 * is_palindrome - Calls the recursive helper function with the correct
 * initial arguments
 * @s: string to be checked
 * Return: takes a recursive function as argument
 */
int is_palindrome(char *s)
{
	return(palin_check(s, 0, _strlen(s) - 1));
}

/**
 * palin_check - funciton that checks for a palindrome recursively
 * Description: a recursive function that sets new values for
 * the indices of the substring
 * @s: pointer to string
 * @start: first index of string s
 * @end: last index of string s
 * Return: returns 1 if a string is a palindrome and 0
 */
int palin_check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	else
		return (palin_check(s, start + 1, end - 1));
}

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
