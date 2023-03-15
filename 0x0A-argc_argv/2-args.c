#include "main.h"
#include <stdio.h>

/**
* main - program that prints all arguments it receives
* @argc: number of arguments passed
* @argv: pointer to an array of pointers to strings(arguments)
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int j;

	if (argc >= 1)
	{
		for (j = 0; j < argc; j++)
			printf("%s\n", argv[j]);
	}
	return (0);
}
