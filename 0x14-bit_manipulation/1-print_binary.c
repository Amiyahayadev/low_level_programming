#include "main.h"

/**
 * print_binary - converts decimal to binary and prints
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/*Print a single '0' if the number is zero*/
	if (n > 1)
	{ 
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');	
}
