#include "main.h"

/**
 * binary_to_uint - converts binary string to decimal
 * @b: binary string
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsignedInt = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		 /*Check for valid binary digit*/
		if (*b == '0' || *b == '1')
			unsignedInt = (unsignedInt << 1) + (*b - '0');
		else
			return (0);
		b++;
	}
	return (unsignedInt);
}

