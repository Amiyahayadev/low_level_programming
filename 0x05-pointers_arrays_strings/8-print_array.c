#include "main.h"

/**
* print_array - prints values of n elements in array horizontally
* @n: number of elements of an integer array
* @a: a pointer to the arrray
*
* Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%d", a[i]);
			if(i != n -1)
				printf(", ");
	}
	printf("\n");
}
