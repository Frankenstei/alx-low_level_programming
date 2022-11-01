#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonalss
 *
 * @a: integer
 * @size: integer
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	int diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[(size + 1) * i)];
		diag2 = diag2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d", diag1, diag2);
}
