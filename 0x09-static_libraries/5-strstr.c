#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: the main C string to be scanned
 * @needle: the small string to be searched with-in haystack string
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *h = haystack;
		char *n = needle;
			while (*h == *n && *n != '\0')
			{
				h++;
				n++;
			}
			if (*n == '\0')
				return (haystack);
	}
	return (0);
}
