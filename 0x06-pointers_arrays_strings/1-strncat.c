#include "main.h"

/**
 * _strncat - concatenate n bytes from nother string
 *
 * @n: integer n
 * @dest: destination character
 * @src: source character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length = 0;

	while (*dest != '\0')
	{
		length++;
		dest++;
	}

	for (i = 0; i <= n; i++, length++)
	{
		*(dest + length) = *(src + i);
	}

	return  (dest);
}
