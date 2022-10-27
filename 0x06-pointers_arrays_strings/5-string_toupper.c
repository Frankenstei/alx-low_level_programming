#include "main.h"

/**
 * str_toupper - coverts strings to uppercase
 *
 * @str: string to be converted
 *
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
		str++;
	}
	return (str);
}
