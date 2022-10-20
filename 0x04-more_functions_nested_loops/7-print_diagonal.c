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
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			int j = 0;

			_putchar('\\');
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
