#include <stdio.h>
/**
 * main - printing hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
