#include "main.h"

/**
 * leet - encoder
 *
 * @s: string character
 *
 * Return: pointer
 */

char *leet(char *s)
{
	int i, j;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'a', 'e', 'o', 't', 'l'};
	char e[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + j) == *(a + j) || *(s + j) == *(b  + j))
			{
				*(s + j) = *(e + j);
			}
		}
	}
	return  (s);
}
