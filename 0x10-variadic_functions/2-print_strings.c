#include "variadic_functions.h"

/**
 * print_strings - print string
 *
 * @separator: separator
 * @n: integer
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
