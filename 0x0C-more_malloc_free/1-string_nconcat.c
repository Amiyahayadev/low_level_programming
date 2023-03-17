#include "main.h"
#include <stdlib.h>

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
* *string_nconcat - program concatenates two strings but copies n bytes
* @s1: first string to add
* @s2: second string to append
* @n: first n bytes to be copied from s2
* Return: pointer to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*declare pointer to newly allocated block*/
	char *s3n;
	
	int l1, l2, l3;

	int r, j;
	
	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ln = 0;	
	while (s2[ln] < n + 1)
		ln++;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3n = l1 + ln + 1;
	l3 = l1 + l2 + 1;

	/*If n is >= the length of s2 then use the entire string s2*/
	if (n >= l2)
		s3n = malloc(sizeof *s3n * l3);
	else
		s3n = malloc(sizeof *s3n * l3n);

	if (s3n == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < l1; r++)
		s3n[r] = s1[r];
	for (j = 0; j < n + 1; j++)
		s3n[r + j] = s2[j];
	
	s3n[r + j] = '\0';
	return (s3n);
}
