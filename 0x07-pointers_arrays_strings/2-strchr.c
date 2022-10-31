#include "main.h"

/**
 * _strchr - returns a pointer to c in s or null
 *
 * @s: character string
 * @c: character c
 *
 * Return: pointer or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) == '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s);
		}
	}
	return (NULL);
}
