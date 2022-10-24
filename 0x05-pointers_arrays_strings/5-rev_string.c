#include "main.h"

/**
 * rev_string - Reverses string
 *
 * @s: string character
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;

	length = length - 1;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
