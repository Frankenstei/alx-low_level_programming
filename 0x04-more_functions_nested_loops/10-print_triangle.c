#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: an integer
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; isize; i++)
		{
			for(int j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (int k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
