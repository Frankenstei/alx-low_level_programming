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
			i++;
			int j = 0;

			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
