#include <stdio.h>
/**
 * main - three numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 0;
	int n = 0;
	int o = 0;

	while (m <= 7)
	{
		n = 0;
		while (n <= 8)
		{
			o = 0;
			while (o <= 9)
			{
				if (m != n && m != o && o != n && m < n && n < o)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					if (m < 7 || n < 9 || o < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				o++;
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
