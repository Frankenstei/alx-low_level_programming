#include "main.h"

/**
 * clear_bit - clear bit
 *
 * @n: number
 * @index: index
 *
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (0);
	}
	i = 1 << index;

	if (*n & i)
	{
		*n = *n ^ i;
	}
	return (1);
}
