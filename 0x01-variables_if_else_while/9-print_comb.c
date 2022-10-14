#include <stdio.h>
/**
 * main - printing numbers with ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
