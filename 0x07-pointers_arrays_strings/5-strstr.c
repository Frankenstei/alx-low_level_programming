#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: main character string
 * @needle: substring
 *
 * Return: s or null
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned i, j;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(haystack + j) != *(needle + i))
			{
				break;
			}
		}
		if (*(needle + i) == '\0')
		{
			return (haystack + j);
		}
	}

	return ('\0');
}
