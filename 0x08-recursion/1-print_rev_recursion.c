#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string character
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s > 0)
	{
		_putchar(*(s + ((sizeof(*s) /sizeof(char)) - 1)));
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}
