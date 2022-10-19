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
			int mul = a * b;
			_putchar(mul + '0');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
