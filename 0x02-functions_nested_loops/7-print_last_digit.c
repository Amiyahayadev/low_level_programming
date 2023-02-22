#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * @j - a var to hold the value of last digit
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int j = abs(n) % 10;
	_putchar(j + '0');
	return (j);

}
