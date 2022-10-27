#include "main.h"

/**
 * _strncpy - copies n bytes to another string
 *
 * @n: integer
 * @dest: destination character
 * @src: source character
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] == src[n]; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
