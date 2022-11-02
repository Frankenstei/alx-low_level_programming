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
	if (*s != '\0')
	{
		s++;

		return (1 + (_strlen_recursion(s + 1)));
	}
}
