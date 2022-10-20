#include "main.h"

/**
 * print_line - prints n lines
 *
 * @n: an integer
 *
 * Return: Always 0
 */

void print_line(int n)
{
	i = 0;

	while (i < n)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
