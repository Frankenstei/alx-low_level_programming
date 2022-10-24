#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Return: an integer
 *
 * @s: string of type char
 */

int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		s++;
		num++;
	}
	return num;
}
