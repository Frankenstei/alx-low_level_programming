#include "main.h"

/**
 * cap_string - capitalize
 *
 * @s: string
 *
 * Return: pointer
 */

char *cap_string(char *s)
{
	int i = 0;

	if (*(s + i) >= 'a' && *(s + i) <= 'z')
	{
		*(s + i) = *(s + i) - 32;
	}

	for (i = 1; *(s + i) != '\0'; i++)
	{
		if ((*(s + i) == ' ' || *(s + i) == ','
					|| *(s + i) == ';' || *(s + i) == '.'
					|| *(s + i) == '!' || *(s + i) == '?'
					|| *(s + i) == '"' || *(s + i) == '('
					|| *(s + i) == ')' || *(s + i) == '{'
					|| *(s + i) == '}' || *(s + i) == '\t'
					|| *(s + i) == '\n') && *(s + i + 1) != ' ')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
	}

	return (s);
}
