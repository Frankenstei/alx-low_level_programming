#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints argument received
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(argc, *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
