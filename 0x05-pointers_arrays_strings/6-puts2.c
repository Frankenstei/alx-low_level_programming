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
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i + 1) != '\0')
		{
			_putchar(*str - i);
			str = str + 1;
		}
	}
	_putchar('\n');
}
