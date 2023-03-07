#include "main.h"

/**
 * print_chessboard - prints elements in a 2D array of equal size 8
 * @a: pointer to a 2-dimensional array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int n, i, j;

	n = 8;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(a[i][j] + 0);
		}
		_putchar('\n');
	}
}
