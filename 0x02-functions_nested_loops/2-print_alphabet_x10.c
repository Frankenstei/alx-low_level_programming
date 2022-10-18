#include "main.h"
/**
 * main - prints alphabets
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (n <= 10)
	{
		int n = 0;
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
