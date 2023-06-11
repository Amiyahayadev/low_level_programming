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
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
