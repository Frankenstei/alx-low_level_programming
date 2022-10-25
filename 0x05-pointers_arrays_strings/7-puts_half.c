#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: character string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length;

	while (*str != '\0')
	{
		length++;
	}

	length = (length - 1) / 2;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		str++;
	}
	_putchar('\n');
}
