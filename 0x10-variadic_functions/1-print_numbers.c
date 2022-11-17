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
	for (i = 0; i < n; i++)
	{
		printf("%u", va_arg(ap, unsigned int);
		if (separator && i < (n -1))
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
