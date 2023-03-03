#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	int capit_next;

	i = 0;
	capit_next = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			capit_next = 1;
		}
		else
		{
			if (capit_next && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			capit_next = 0;
		}
		i++;
	}
	return (str);
}
