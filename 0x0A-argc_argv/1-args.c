#include <stdio.h>
/**
 * main - entry point of program
 * @argc: count of all arguments
 * @argv: the string arguments passed from command line
 * Return: 0 on SUCCESS
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	/* Check if no other argument was passed except program name*/
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", argc - 1);

	return (0);
}

