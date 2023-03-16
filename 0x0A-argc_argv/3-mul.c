#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _multiply - multiplies two numbers
* @x: first integer
* @y: 2nd integer
* Return: 1 on error
*/
int _multiply(int x, int y)
{
	int mulRes;

	if (x == 0 || y == 0)
	{
		printf("Error\n");
		return (1);
	}
	mulRes = x * y;
	printf("%d\n", mulRes);
}

/**
* main - receives arguments to be multiplied
* @argc: count to all arguments
* @argv: pointer to an array of pointers to strings(the arguments)
* Return: 0 on SUCCESS
*/

int main(int argc, char **argv)
{
	_multiply(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
