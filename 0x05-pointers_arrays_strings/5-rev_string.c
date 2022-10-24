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
	int length;

	for (length = 0; *(s + length) != '\0'; s++)
	{
		length++;
	}

	for (length = length - 1; length >= 0; length--)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
}
