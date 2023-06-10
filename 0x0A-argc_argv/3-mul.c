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
	int mul, arg1, arg2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	mul = (arg1 * arg2);
	
	printf("%d\n", mul);
	return (0);
}
