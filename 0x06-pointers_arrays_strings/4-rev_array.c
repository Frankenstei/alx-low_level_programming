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
	int i, length = 0;

	for (i = 0; i < n; i++)
	{
		length++;
	}
	for (i = (length - 1); i > 0; i--)
	{
		*(a + i);
	}
}
