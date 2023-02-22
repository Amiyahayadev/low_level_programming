#include <ctype.h>

/**
 * _isalpha - checks if an entry is a letter or not
 * Description: Get an entry from user and prints
 * 1 in case it's a letter and 0 in case it's not
 * @c: a variable to be entered by user
 * @x - a variable to get the result of isalpha
 * Return: 0 or 1
 */
int _isalpha(char c)
{

	int x = isalpha(c);

	if (x > 0)
		return (1);
	else
		return (0);
}
