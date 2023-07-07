#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: address of decimal number
 * @index: the index, starting from 0 of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	/* check if index is out of range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index;

	/*Set the bit at the specified index to 1*/
	*n |= m;
	return (1);
}
