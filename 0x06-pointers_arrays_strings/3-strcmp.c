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
	int i, j;

	for (i = 0, j = 0; (*(s1 + i) != '\0' && *(s2 + j) != '\0') && (*(s1 + i) == *(s2 + j)); i++, j++)
	{
		;
	}
	if (*(s1 + i) == *(s2 + j))
	{
		return (0);
	}
	else
	{
		return ((*(s1 + i)) - (*(s2 + j)));
	}
}
