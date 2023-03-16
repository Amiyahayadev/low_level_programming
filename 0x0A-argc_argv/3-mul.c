#include "main.h"
#include <stdio.h>

/**
* _multiply - multiplies two numbers
*
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

int main(int argc, char **argv)
{
	_multiply(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
