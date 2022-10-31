#include "main.h"

/**
 * _memset - fills the first n bytes of memory
 * @s: character pointer
 * @n: integer
 * @b: constant byte
 *
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
