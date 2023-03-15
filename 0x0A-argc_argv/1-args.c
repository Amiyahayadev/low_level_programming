#include "main.h"
#include <stdio.h>
/**
* main - program prints the number of arguments passed into it
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			printf("%d\n", agrc);
	}
	return (0);
}
