#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - returns pointer
 *
 * @s1: character string
 * @s2: charactet string
 * @n: integer
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length  length1, length2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 = NULL)
	{
		s2 = "";
	}
	for (length1 = 0; s1[length1] != '\0'; length1++)
	for (length2 = 0; s2[length2] != '\0'; length2++)
	if (n >= length2)
	{
		length = length1 + length2;
	}
	else
	{
		length = length1 + n;
	}
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		if (length <= length1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - length1];
		}
	}
	ptr = '\0';
	return (ptr);
}

