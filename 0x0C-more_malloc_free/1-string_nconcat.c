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
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		k = i + j;
	}
	else
	{
		k = i + n;
	}
	ptr = malloc((k + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < k; j++)
	{
		if (j <= i)
		{
			ptr[j] = s1[j];
		}
		if (j >= i)
		{
			ptr[j] = s2[j];
		}
	}
	return (ptr);
}

