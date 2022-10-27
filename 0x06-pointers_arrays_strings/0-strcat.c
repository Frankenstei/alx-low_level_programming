#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: a pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i, length;

	for (length = 0; *(dest + length) != '\0'; length++)
	{
		;
	}

	for  (i = 0; *(src + i) != '\0'; i++, length++)
	{
		*(dest + length) = *(src + i);
	}
	*(dest + length) = '\0';
	return (dest);
}
