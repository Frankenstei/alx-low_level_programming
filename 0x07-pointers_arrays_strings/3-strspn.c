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
	int i, length = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		if (*(s + i) == *(accept + i))
		{
			length++;
		}
	}
	return (length);
}
