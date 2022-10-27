#include "main.h"

/**
 * rot13 - encodes using rot13
 *
 * @s: string to he encoded
 *
 * Return: pointer
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z')
				|| (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] > 'm' && s[i] <= 'z')
					|| (s[i] > 'M' && s[i] <= 'Z'))
			{
				s[i] = s[i] - 13;
				break;
			}
			s[i] = s[i] + 13;
			break;
		}
		i++;
	}
	return (s);
}
