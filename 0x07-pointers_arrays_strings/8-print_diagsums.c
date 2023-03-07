#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integer
 * @a: a square matrix of integers(2D array)
 * @size: size of each dimension
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, z;

	sum1 = 0;
	sum2 = 0;

	for (z = 0; z < size; z++)
	{
		sum1 += a[z * size + z];
		sum2 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
