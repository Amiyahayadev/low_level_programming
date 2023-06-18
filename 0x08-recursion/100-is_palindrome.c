#include "main.h"

/**
 * is_palindrome - Calls the recursive helper function with the correct
 * initial arguments
 * @s: string to be checked
 * Return: takes a recursive function as argument
 */
int is_palindrome(char *s)
{
	return (palin_check(s, 0, _strlen_recursion(s) - 1));
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
 * _strlen_recursion - finds the lenght of a string recursively
 * @s: pointer to string
 * Return: total length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
