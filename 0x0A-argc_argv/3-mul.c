#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 *
 * @argc - argument count
 * @argv - argment vector
 *
 * Return: 0, 1 if two arguments not returned
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 2)
	{
		for (i = 0; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}

		printf("%i\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
