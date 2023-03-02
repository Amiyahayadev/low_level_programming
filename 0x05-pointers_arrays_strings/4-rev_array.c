#include "main.h"

/**
 * reverse_array - swaps the values of indices directly at memory address
 * @a: points to memory address of arry values
 * @n: array length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	int t;

	j = 0;
	for (i = n - 1; j < i; i--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		j++;
	}
}
