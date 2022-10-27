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
	int i;

	while (*s != '\0')
	{
		for (i == 0; *(s + i); i++)
		{
			if (i == 0)
			{
				*(s + i) = s[i] - 32;
			}

			if (s[i] == ',' || s[i] == ';' s[i] == '.' || s[i] == '|'
					|| s[i] == '?' || s[i] == '"'
					|| s[i] == '(' || s[i] == ')'
					|| s[i] == '{' || s[i] == '}')

			{
				*(s + i) = s[i + 2] - 32;
			}
		}
	}
	return (s);
}
