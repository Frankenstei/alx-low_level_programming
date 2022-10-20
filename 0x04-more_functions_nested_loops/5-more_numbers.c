#include "main.h"

/**
 * more_numbers - prints zero to fourteen
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (i > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
