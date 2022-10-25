#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, integer, sign;

	if (s[i] == '-')
	{
		sign = -1;
	}
	else
	{
		sign = 1;
	}
	i++;
	for (; *(s + i); ++i)
	{
		integer = integer * 10 + (*(s + i) - '0');
	}

	return (sign * integer);
}
