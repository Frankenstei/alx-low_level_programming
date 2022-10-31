#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 *
 * @n: unsigned int
 * @src: source
 * @dest: destination
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
