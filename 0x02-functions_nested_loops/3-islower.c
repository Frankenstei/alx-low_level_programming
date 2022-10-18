#include "main.h"
/**
 * _islower - checks for lowercase letter
 *
 * Returns: 1 for lowercase and 0 otherwise
 *
 * @c: is a character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
