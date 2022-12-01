#include "main.h"

/**
 * get_endianness - gets the word
 *
 * Return: integer
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) & i;

	return ((int) *c);
}
