#include "main.h"

/**
 * _memset - fills the first n bytes 
 * of memory area pointed by s with constant byte b
 *
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
