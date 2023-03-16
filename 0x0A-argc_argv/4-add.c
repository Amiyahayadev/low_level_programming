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
	int sum, i;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]) || atoi(argv[i]) < 1)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else 
		printf("%d\n", sum);
	return (0);
}
