#include "main.h"
/**
 * main - prints alphabets
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	while (n <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
			n++
		}
		_putchar('\n');
	}
}
