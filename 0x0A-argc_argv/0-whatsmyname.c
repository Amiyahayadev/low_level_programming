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

	if (argc < 2)
		printf("%s\n", argv[0]);
	return (0);			
}
