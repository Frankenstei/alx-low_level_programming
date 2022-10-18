#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
