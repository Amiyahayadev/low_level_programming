#include "main.h"
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
	int num1, num2;
	int i, asize;
	int *arr;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}
	/*check for digits*/
	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				print_error();
				exit(98);
			}
		}
	}
	asize = argc - 1;
	arr = create_array(asize, sizeof(int));

	for (i = 0; i < asize; i++)
	{
		 arr[i] = atoi(argv[i + 1]);
	}
	num1 = arr[0];
	num2 = arr[1];
	mul = num1 * num2;
	print_int(mul);
	free(arr);
	_putchar('\n');
	return (0);
}
/**
 * print_error - Prints "Error" followed by a new line
 * Return: void
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * _isdigit - function definition
 * Description: test if value is a digit
 * @n: the value to test
 * Return: 1-true, 0-false
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}

/**
 * create_array - function that allocates memory for an array of
 * any data type using malloc
 * @nmemb: number of elements to be contained in memory
 * @size: no of bytes for ech element
 * Return: pointer to the newly allocated array
 */
void *create_array(unsigned int nmemb, unsigned int size)
{
	unsigned int tsize;

	void *nstr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	tsize = size * nmemb;
	nstr = malloc(tsize);
	if (nstr == NULL)
		return (NULL);

	return ((void *)nstr);
}

/**
 * print_int -  prints characters as intergers
 * @num: string of number to print
 * Return: void
 */
void print_int(int num)
{
	int num_dig, temp, i;

	char *digits;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	/* Determine the number of digits */
	num_dig = 0;
	temp = num;
	while (temp > 0)
	{
		num_dig++;
		temp /= 10;
	}
	/* Create an array to store the digits */
	digits = create_array(num_dig, sizeof(char));
	/*Extract the digits from the number*/
	i = num_dig - 1;
	while (num > 0)
	{
		digits[i] = num % 10 + '0';
		 num /= 10;
		 i--;
	}
	for (i = 0; i < num_dig; i++)
	{
		_putchar(digits[i]);
	}
	free(digits);
}
