#include "main.h"

/**
 * print_diagonal - prints \
 *
 * @n: integer
 *
 * Reeturn: Always 0
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
		}
		i++;
	}
	_putchar('\n');
}
