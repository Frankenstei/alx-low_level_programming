#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array and initializes
 * @size: unsigned int
 * @c: character string
 *
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *ptr;

	ptr = malloc(size * sizeof(char));

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return ptr;

}
