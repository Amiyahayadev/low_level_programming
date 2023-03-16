#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - receives arguments to be multiplied
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on SUCCESS
*/
int main(int argc, char **argv)
{
	int mulRes, i;
	
	mulRes = 1;
	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; argc < 4 && i < argc; i++)
		mulRes *= atoi(argv[i]);

	printf("%d\n", mulRes);
	return (0);
}
