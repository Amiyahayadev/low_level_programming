#include "main.h"

/**
 * get_bit - function that gets a bit at a given index
 * @n: unsigned long int decimal
 * @index: the index, starting from 0
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index; /*container to hold long int*/
	return ((n & m) != 0);
}
