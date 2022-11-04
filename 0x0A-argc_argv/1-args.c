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
	printf("%i\n", argc - 1);
	return (0);
}
