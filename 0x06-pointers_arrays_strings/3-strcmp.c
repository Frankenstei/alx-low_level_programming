#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: string character
 * @s2: string character
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}

	else if (*s1 > *s2)
	{
		return ((*s1 - *s2));
	}
	else
	{
		return ((*s1 = *s2));
	}
}
