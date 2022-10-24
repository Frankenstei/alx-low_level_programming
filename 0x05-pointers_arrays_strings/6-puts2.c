#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: character string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (; *str != '\0'; str = str + 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
