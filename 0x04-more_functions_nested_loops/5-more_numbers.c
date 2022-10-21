#include "main.h"

/**
 * more_numbers - prints zero to fourteen
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			if (j < 10)
			{
				x = j;
			}
			else
			{
				y = j / 10;
				x = j % 10;

				_putchar(y + '0');
			}
			_putchar(x +  '0');
		}
		_putchar('\n');
	}

}
