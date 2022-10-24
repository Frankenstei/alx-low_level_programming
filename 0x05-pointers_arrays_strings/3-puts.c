#include "main.h"

/**
 * _puts - writes str to stdout
 *
 * @str: a character
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
