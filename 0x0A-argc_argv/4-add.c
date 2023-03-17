#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main - program that adds positive numbers only
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on  SUCCESS, 1 on Error
*/
int main(int argc, char **argv)
{
	int sum = 0;

	int i;

	for (i = 1; i < argc; i++)
	{
		if (dig_check(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
* dig_check - checks if string character's are digits
* @s: string to checked
* Return: 1 if digit or 0 of not a digit
*/
int dig_check(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
