#include "main.h"

/**
 * _strspn - gets length of prefix string
 *
 * @s: character string
 * @accept: character bytes
 *
 * Return: unsigned it
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for  (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) == *(accept + i))
			{
				length++;
			}
		}
	}
	return (length);
}
