#include "main.h"

/**
 * is_prime_number - checks for a prime number
 *
 * @n: integer n
 *
 * Return: integer
 */

int _is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n % n == 0 && n % 1 == 0)
	{
		return (1);
	}
}
