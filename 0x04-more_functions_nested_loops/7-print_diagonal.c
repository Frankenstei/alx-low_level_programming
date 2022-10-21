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
	int i, j;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
}
