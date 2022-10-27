#include "main.h"

/**
 * reverse_array - reverses the content of an array
 *
 * @a: array
 * @n: length of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, store;

	for (i = 0, j =  (n - 1); i < (n - 1), j > 0; i++, j--)
	{
		store = a[j];
		a[i] = store;
	}
}
