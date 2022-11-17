#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: separator
 * @n: integer
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = n + 1; i >= 0; i = va_arg(ap, unsigned int))
	{
		printf("%u", i);
		if ((va_arg(ap, unsigned int) != NULL))
		{
			printf(", ");
		}
	}
	va_end(ap);
}
