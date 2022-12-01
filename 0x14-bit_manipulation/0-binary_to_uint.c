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
	unsigned int uint;

	for (uint = 0; *b; b++)
	{
		if (b != '0' || b != '1' || b == NULL)
		{
			return (0);
		}
		else if (b == '1')
		{
			uint = (uint << 1) | 1;
		}
		else if (b == '0')
		{
			uint = uint << 1;
		}
	}
	return (uint);
}
