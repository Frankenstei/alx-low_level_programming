#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - adds positive number
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, 1 if character
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if ((argv[i] >= 'a' && argv[i] <= 'z') || (argv[i] >= 'A' && argv[i] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%i\n", sum);

	return (0);
}
