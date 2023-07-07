#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: returns the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	unsigned long int xorResult;

	xorResult = n ^ m;

	while (xorResult != 0)
	{
		if (xorResult & 1UL)
			count++;
		/*Right shift to process the next bit*/
		xorResult >>= 1;
	}
	return (count);
}
