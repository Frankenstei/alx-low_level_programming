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
	unsigned int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		str++;
		length++;
	}

	ptr = (char *)malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
