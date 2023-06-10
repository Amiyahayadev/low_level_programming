#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - program that multiplies two numbers
 * @argc: count of all arguments passed
 * @argv: array of string arguments
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("ERROR\n");
		return (1);
	}
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
