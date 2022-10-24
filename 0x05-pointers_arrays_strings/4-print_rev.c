#include "main.h"

/**
 * print_rev - reverse the order of a string
 *
 * @s: character string
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	for (*s = s[length - 1]; *s != '\0'; s--)
	{
		if (length - 1 > 0)
		{
			_putchar(*s);
		}
	}
	_putchar('\n');
}
