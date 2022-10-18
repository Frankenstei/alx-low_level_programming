#include "main.h"
/**
 * _isalpha - checks for a letter
 * Return: 1 if letter and 0 if otherwise
 *
 * @c: is a character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
