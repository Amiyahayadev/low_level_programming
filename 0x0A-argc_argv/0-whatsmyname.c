#include "main.h"
#include <stdio.h>

/**
* main - program that prints it's name
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	int j;

	/*check the no of arguments passed in is 1*/
	if (argc == 1)
	{
	/* iterate through the characters in 1st argument to use putchar*/
		for (j = 0; argv[0][j] != '\0'; j++)
			putchar(argv[0][j]);
		putchar('\n');
	}
	return (0);
}
