#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - newly allocated memory
 *
 * @str: character string
 *
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int length;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		str++;
		length++;
	}

	ptr = malloc(i * sizeof(char));

	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
