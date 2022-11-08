#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - pointer to 2D array
 * @width: array width
 * @height: array height
 *
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	ptr = malloc(width * height * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
