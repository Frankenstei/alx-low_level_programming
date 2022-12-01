#include "main.h"

/**
 * flip_bits - flip bits
 *
 * @n: first number
 * @m: second number
 *
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n = n >> 1, m = m >> 1)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
	}
	return (i);
}
