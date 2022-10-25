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
	int i, length;
	while (*str != '\0')
	{
		length++;
	}

	length = length -1;

	for (i = length / 2; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
