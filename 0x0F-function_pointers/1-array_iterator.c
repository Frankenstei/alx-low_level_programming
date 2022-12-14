#include "function_pointers.h"

/**
 * array_iterator - a function
 *
 * @array: array
 * @size: array size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
