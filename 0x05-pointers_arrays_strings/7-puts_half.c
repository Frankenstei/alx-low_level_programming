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
	int i, length = 0;

	while (*(str + length))
		length++;
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}

	while (i < length)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
