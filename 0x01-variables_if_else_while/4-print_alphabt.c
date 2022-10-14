#include <stdio.h>
/**
 * main - Print lower case except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		if (c == 'd' || c == 'p')
		{
			c = c + 2;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
