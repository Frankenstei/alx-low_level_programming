#include "main.h"

/**
 * _pow_recursion - exponentiation
 *
 * @x: integer number
 *
 * @y: integer power
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else 
	{
		x * _power_recursion(x, (y - 1));
	}
}
