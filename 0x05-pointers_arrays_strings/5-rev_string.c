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
	int i, length;

	for (i = 0; *(s + i) != '\0'; s++)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
