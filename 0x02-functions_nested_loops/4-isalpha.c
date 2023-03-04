#include "main.h"

/**
 * _isalpha - checks if an entry is a letter or not
 * Description: Get an entry from user and prints
 * 1 in case it's a letter and 0 in case it's not
 * @c: a variable to be entered by user
 *
 * Return: 0 or 1
 */
int _isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
