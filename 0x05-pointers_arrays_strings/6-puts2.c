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
		if (*(str + i) == '\0')
		{
			break;
		}
		else
		{
			_putchar(*str);
			str = str + 2;
		}
	}
	_putchar('\n');
}
