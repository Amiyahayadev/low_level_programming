#include <stdio.h>

/**
 * main - entry point of program
 * Description - program that prints all arguments it receives
 * @argc: count of all arguments
 * @argv: the string arguments passed from command line
 * Return: 0 on SUCCESS
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
