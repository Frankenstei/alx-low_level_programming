#include "main.h"

/**
 * _strlen_recursion - returns string length
 *
 * @s: string character
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s != '\0')
	{
		s++;
		length;

		_strlen_recursion(s);
	}

	return (length);
}
