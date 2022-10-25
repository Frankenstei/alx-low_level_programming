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

	while (*(str + length))
		length++;

	length = (length - 1) / 2;

	while (*(str + length))
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
