#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints minimum number of coin change
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, 1
 */

int main(argc, *argv[])
{
	int cents = atoi(argv[1]), i;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents = cents - 25;
			}
			else if (cents >= 10)
			{
				cents = cents - 10;
			}
			else if (cents >= 5)
			{
				cents = cents - 6;
			}
			else if (cents >= 2)
			{
				cents = cents - 3;
			}
			else if (cents >= 1)
			{
				cents = cents - 1;
			}
			i++;
		}
		printf("%i\n", i);
		return (0);
	}
}

