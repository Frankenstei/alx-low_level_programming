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

	length = length - 1;

	while (length >= 0)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
}
