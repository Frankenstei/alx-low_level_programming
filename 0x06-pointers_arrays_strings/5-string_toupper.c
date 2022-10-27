#include "main.h"

/**
 * str_toupper - coverts strings to uppercase
 *
 * @str: string to be converted
 *
 * Return: pointer
 */

char *str_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) >= 'z')
		{
			*(str + i) = *(str + i) - 33;
		}
	}
	return (str);
}
