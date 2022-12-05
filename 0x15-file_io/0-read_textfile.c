#include "main.h"

/**
 * read_textfile - reads and prints text
 *
 * @filename: name of file
 * @letters: number of letters to print
 *
 * Return: something
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text;
	ssize_t rread, wwrite;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	text = malloc(sizeof(char) * letters);

	if (text == NULL)
	{
		return (0);
	}

	rread = read(fd, text, letters);
	wwrite = write(STDOUT_FILENO, text, rread);
	close(fd);

	free(text);

	return (wwrite);
}
