#include "main.h"
#include <stdio.h>

/**
 * print_array - prints arrays
 *
 * @a: array name
 *
 * @n: array number
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i == n - 1; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
