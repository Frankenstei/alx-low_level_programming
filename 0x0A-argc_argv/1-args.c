#include <stdio.h>

/**
 * main - prints the number of argument
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
