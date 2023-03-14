#include "main.h"
#include <string.h>
int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - check if a given string is a palindrome
 * @s: string to be cheked
 *
 * Return:  1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
		int len;
		
		len = strlen(s);
		return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - check if a string is a palindrome recursively
 * @s: string to be cheked
 * @start: index value at beginning of string
 * @end: index value at end of string
 *
 * Return:  1 if a string is a palindrome and 0 if not.
 */
 
 int is_palindrome_helper(char *s, int start, int end)
 {
 	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
 }
