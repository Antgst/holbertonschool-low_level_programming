#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - create a file and write inside
 * @filename: Name of the file to be created
 * @text_content: String to write inside this file
 *
 * Return: Sucess = 1, failed = -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write2;
	size_t textlen = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[textlen] != '\0')
		textlen++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (textlen > 0)
	{
		write2 = write(fd, text_content, textlen);
		if (write2 == -1 || (size_t)write2 != textlen)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
