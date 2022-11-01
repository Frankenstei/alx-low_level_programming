#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 *
 * @a: integer
 * @size: integer
 */

void print_diagsums(int *a, int size)
{
	int i, j;

	int diag1 = 0, diag2 = 0;

	for (i = 0, j = 0; i < size; i++, j++)
	{
		diag1 += a[i][j];
	}
	printf("%d, ", diag1);

	for (i = 0, j = (size - 1); i < size; i++, j--)
	{
		diag2 += a[i][j];
	}
	printf("%d", diag2);
}
