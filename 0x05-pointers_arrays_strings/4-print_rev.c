#include "main.h"

/** print_rev - reverse the order of a string
 *
 * @s: character string
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	for (*s = s[_strlen(s) - 1]; *s != '\0'; s--)
	{
		if (_strlen(s) - 1 > 0)
		{
			_putchar(*s);
		}
	}
	_putchar('\n');
}
