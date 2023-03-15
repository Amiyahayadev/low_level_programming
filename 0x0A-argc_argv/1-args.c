#include "main.h"
#include <stdio.h>
/**
* main - program prints the number of arguments passed into it
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on success
*/
int main(int argc, __attribute__ ((unused)) char **argv)
{
	int count;

	if (argc == 1)
		count = 0;
	else
		for (count = 0; count < argc; count++)
		;
	printf("%d\n", count);
	return (0);
}
