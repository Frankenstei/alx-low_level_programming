#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 *
 * @b: binary num
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	int length, multiplier;

	if (b == NULL)
	{
		return (0);
	}
	for (length; b[length] != '\0'; length++)
	{
		;
	}

	for (length--, multiplier = 1; length > 0; length--, multiplier = multiplier * 2)
	{
		if (b != '0' || b != '1')
		{
			return (0);
		}
		if (b[length] & 1)
		{
			uint = uint + multiplier;
		}
	}
	return (uint);
}
