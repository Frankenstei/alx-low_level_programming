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
	unsigned int i, j, k;
	char *ptr;

	ptr = malloc((i + n + 1) * sizeof(char));
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n >= j)
	{
		for (k = 0; s2[k] != '\0'; k++, i++ )
		{
			ptr[i] = s2[k];
		}
		ptr[i] = '\0';
	}
	else
	{
		for (k = 0; k < n; k++, i++)
		{
			ptr[i] = s2[k];
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

