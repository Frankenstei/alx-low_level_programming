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
	if (size > 0)
	{
		int i = 0;

		while ( i < size)
		{
			int j = 0;

			while ( j < (size - i))
			{
				_putchar(' ');
				j++;
			}
			_putchar('#');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
