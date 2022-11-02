#include "main.h"

/**
 * _sqrt_recursion - square root of a number
 *
 * @n: integer number
 *
 * Return: integer
 *
 * _power - power of 0.5
 *
 * @x: integer number
 * @y: integer number
 *
 * Return: integer
 */
int _power(int x, int y);

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
	
