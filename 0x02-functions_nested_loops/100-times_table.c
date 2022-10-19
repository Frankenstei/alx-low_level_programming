#include "main.h"
/**
 * print_times_table - prints times table
 *
 * Return: Always 0
 *
 * @n: integer
 */

void print_times_table(int n)
{
	int a, b;
	if (n >= 0 && n <= 15)
	{
		a = 0;

		while (a <= n)
		{
			b = 0;

			while (b <= n)
			{
				if (b == 0)
				{
					_putchar((a * b) + '0');
				}
				else if ((a * b) < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((a * b) + '0');
				}
				else if ((a * b) >= 10 && (a * b) < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((a * b) / 100) + '0');
					_putchar(((a * b) % 100) + '0');
				}
				else if ((a * b) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((a * b) / 100) + '0');
					_putchar((((a * b) / 100) % 10) + '0');
					_putchar(((a * b) % 100) + '0');
				}
				b++;
			}
			a++;
			_putchar('\n');
		}
	}
}
