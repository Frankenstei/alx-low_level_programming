#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes
 *
 * @s: character string
 * @accept: charater string
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
			}
		}
	}

	return ('\0');
}
