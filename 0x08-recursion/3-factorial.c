#include "main.h"

/**
 * factorial - factorial of n
 *
 * @n: integer n
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1 || n == 0)
	{
		return (n)
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
