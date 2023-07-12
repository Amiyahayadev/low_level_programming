#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * Description - program that multiplies two numbers
 * @argc: count of all arguments passed
 * @argv: array of string arguments
 * Return: 0 on SUCCESS, 1 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, i, tLen, carry, l1, l2, m = 0, *resArr;
	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
		print_error();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	tLen = l1 + l2;
	resArr = create_array((tLen + 1));
	if (!resArr)
		return (1);
	for (i = 0; i <= tLen; i++)
		resArr[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		num1 = s1[l1] - '0';
		carry = 0;
		for (l2 = l2 - 1; l2 >= 0; l2--)
		{
			num2 = s2[l2] - '0';
			carry += resArr[l1 + l2 + 1] + (num1 * num2);
			resArr[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			resArr[l1] += carry;
	}
	for (i = 0; i < tLen; i++)
	{
		if (resArr[i])
			m = 1;
		if (m)
			_putchar(resArr[i] + '0');
	}
	if (!m)
		_putchar('0');
	_putchar('\n');
	free(resArr);
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
	exit(98);
}

/**
 * _isdigit - function definition
 * Description: test if value is a digit
 * @n: the value to test
 * Return: 1-true, 0-false
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			return (1);
		s++;
	}
	return (0);
}

/**
 * create_array - function that allocates memory for an array of
 * any data type using malloc
 * @nmemb: number of elements to be contained in memory
 * @size: no of bytes for ech element
 * Return: pointer to the newly allocated array
 */
int *create_array(unsigned int nmemb)
{
	int *nstr;

	if (nmemb == 0)
		return (NULL);

	nstr = malloc(nmemb * sizeof(int));
	if (nstr == NULL)
		return (NULL);

	return (nstr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the actual length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
