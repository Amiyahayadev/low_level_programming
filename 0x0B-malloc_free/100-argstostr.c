#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments it receives
 * @ac: no of arguments passed
 * @av: array of string arguments from commandline
 * Return: pointer to a new string allocated in memory
 */
char *argstostr(int ac, char **av)
{
	int i, j, tlen, new_len, ndex;

	char *nstr;

	char *newl = "\n";

	tlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* find total length of all strings */

	for (i = 0; i < ac; i++)
	{
		tlen +=  _strlen(av[i]);
	}

	/* total length of newline characters be stored*/
	new_len = ac;

	/*new memory for concatenated string, including null terminator*/
	nstr =  malloc((tlen + new_len + 1) * sizeof(char));
	if (nstr == 0)
		return (NULL);

	/* initialize new memory as an empty string */
	ndex = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			nstr[ndex] = av[i][j];
			ndex++;
		}
		nstr[ndex] = newl[0];
		ndex++;
	}
	nstr[ndex] = '\0';
	return (nstr);
}

/**
 * str_concat - this function concatenates two strings into
 * a new memory location
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;

	char *nstr;

	unsigned int ln1, ln2, ln3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	ln3 = ln1 + ln2 + 1;

	nstr = malloc(ln3 * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < ln1; i++)
	{
		nstr[i] = s1[i];
	}
	for (j = 0; j < ln2; j++)
	{
		nstr[i + j] = s2[j];
	}
	nstr[ln3 - 1] = '\0';

	return (nstr);
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
