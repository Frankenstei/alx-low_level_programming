#include "main.h"
/**
 * times_table - print times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
			if (b == 0)
			{
				_putchar((a * b) + '0');
				if (a < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}

			}
			else if (mul < 10 && b != 0)
			{
				_putchar(mul + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			else if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
