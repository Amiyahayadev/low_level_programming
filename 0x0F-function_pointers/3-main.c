#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program that performs arithmetic operations
 * @argc: no of arguments it accepts
 * @strarg: array of string arguments passed as inputs
 * Return: 0 on success, exit() of failure
 */
int main(int argc, char **strarg)
{
	int num1,  num2, calc;

	char *operator;

	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(strarg[1]);
	num2 = atoi(strarg[3]);
	operator = strarg[2];

	calculate = get_op_func(operator);
	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = calculate(num1, num2);
	printf("%d\n", calc);

	return (0);
}

