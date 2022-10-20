#include "main.h"

/**
 * print_square - prints square
 *
 * @size: integer
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
