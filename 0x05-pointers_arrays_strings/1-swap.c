#include "main.h"

/**
* swap_int - updates values of two integers at a time
* @a: a pointer to the integer we want to swap
* @b: a pointer to second integer we want to swap
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
