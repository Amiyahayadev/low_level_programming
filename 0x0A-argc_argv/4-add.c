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
		printf("%d", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || atoi(argv[i]) < 1)
		{
			flag = 1;
			break;
		}
		else
			sum += atoi(argv[i]);
	}
	
	if(flag)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);
	return (0);
}
