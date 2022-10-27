#include "main.h"

/**
 * _strncat - concatenate n bytes from nother string
 *
 * @n: integer n
 * @dest: destination character
 * @src: source character
 *
 * Return: character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	for (length = 0; *(dest + length) != '\0'; length++)
	{
		;
	}

	for (i = 0; i < n && *(src + i) != '\0'; i++, length++)
	{
		*(dest + length) = *(src + i);
	}
	return  (dest);
}
