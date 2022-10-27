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
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}
