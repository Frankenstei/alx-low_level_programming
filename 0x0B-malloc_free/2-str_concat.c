#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates
 *
 * @s1: character string
 * @s2: character string
 *
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		s1[i] = s2[j];
	}

	s1[i] = '\0';

	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0, i = 0; k <= i; k++, i++)
	{
		ptr[k] = s1[i];
	}

	return (ptr);
}
