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

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
