#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters, rwrite;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (letters = 0; textcontent[letters] != '\0'; letters++)
	{
		;
	}

	rwrite = write(fd, text_content, letters);
	if (rwrite == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
