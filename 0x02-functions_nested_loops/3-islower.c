#include "main.h"
/**
 * _islower - checks for lowercase letter
 *
 * Returns: Always 1
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
