#include "main.h"

/**
 * _strcpy - copies src to dest
 *
 * @dest: character string
 * @src: character string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
