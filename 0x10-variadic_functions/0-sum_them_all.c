#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 *
 * @n: first integer
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < count; i++)
	{
		sum = sum + arg(ap, unsigned int);
	}
	va_end (ap);
	return sum;
}
