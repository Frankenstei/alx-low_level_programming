#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - comcatenates argument
 * @ac: integer
 * @av: character
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int i;

	if (ac == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
	}

