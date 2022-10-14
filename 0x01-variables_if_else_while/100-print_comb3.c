#include <stdio.h>
/**
 * main - printing numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 0;
	int n = 0;

	while (m <= 8)
	{
		n = 0;
		while (n <= 9)
		{
			if (m != n && n > m)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (m < 8 || n < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
