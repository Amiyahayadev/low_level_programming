#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long int decimal
 * @index: the index, starting from 0
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1UL << index;

	/*Clear the bit at the specified index to 0*/
	*n &= ~m;

	return (1);
}
