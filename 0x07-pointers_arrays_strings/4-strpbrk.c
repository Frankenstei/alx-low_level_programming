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

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s +  j) == *(accept + j))
			{
				return ((s + i));
			}
		}
	}

	return ('\0');
}
