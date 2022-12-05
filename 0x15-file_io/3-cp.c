#include "main.h"
#include <stdio.h>

/**
 * can_open - checks that file can be opened
 *
 * @file_from: source
 * @file_to: destination
 * @argv: argument vector
 *
 * Return: nothing
 */

void can_open(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main program
 * @argc: argument count
 * @argv: arguemnt vector
 *
 * Return: Always 0
 */

int main(int argv, char *argc[])
{
	int file_from, file_to, close_error;
	ssize_t rread, wwrite;
	char text[1024];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	can_open(file_from, file_to, argv);

	rread = 1024;
	while (rread == 1024)
	{
		rread = read(file_from, text, 1024);
		if (rread == -1)
		{
			can_open(-1, 0, argv);
		}
		wwrite = write(file_to, text, rread);
		if (wwrite == -1)
		{
			can_open(0, -1, argv);
		}
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
