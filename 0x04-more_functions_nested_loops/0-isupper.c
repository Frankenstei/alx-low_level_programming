#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 * @c: the integer
 * Return: 1 if c is upper and 0 if otherwise
 */

int _isupper(int c)
{
	if ((c + '0') >= 'A' && (c + '0') <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
