#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int z = 0;

	while (z < 2)
	{
		int y = 0;
		
		while (y < 3) 
		{
			int b = 0;

			while (b < 6)
			{
				int a = 0;

				while (a < 9)
				{
					_putchar(z + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(b + '0');
					_putchar(a + '0');
					_putchar('\n');
					a++;
				}
				b++;
			}
			y++;
		}
		z++;
	}
}
