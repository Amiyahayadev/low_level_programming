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
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the actual length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
