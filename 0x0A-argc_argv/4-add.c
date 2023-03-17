#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers only
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on  SUCCESS, 1 on Error
*/
int main(int argc, char **argv)
{
	int sum = 0;
	int flag = 0;
	int i;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(dig_check(argv[i]))
		{
			flag = 1;
			break;
		}
		else
			sum += atoi(argv[i]);
	}

	if (flag)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);
	return (0);
}
/**
* dig_check - checks if string character's are digits
* @str - string to checked
* Return: 1 if digit or 0 of not a digit
*/
int dig_check(char *s)
{ 
	unsigned int i;
	
	for (i = 0; i < strlen(s); i++)
	{
		if(!isdigit(s[i]))
			return (0);
	}	
	return (1);
}
