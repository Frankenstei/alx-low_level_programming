#include "main.h"

/**
 * _sqrt_recursion - square root of a number
 *
 * _power - power of 0.5
 *
 * @n: integer number
 *
 * Return: integer
 *
 *
 * @x: integer number
 * @y: integer number
 */

int _power(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
		{
			return (y);
		}
		else
		{
			return (-1);
		}
	}

	return (0 + _power(x, y + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_power(n, 2));
}
