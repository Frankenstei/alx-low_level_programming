#include "main.h"

/**
 * set_bit - set bit at an index
 *
 *
 * @n: number
 * @index: index
 *
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	*n = (*n | i);

	return (1);
}
