#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print it to POSIX outpout
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The number of letters, read, print, return 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read;
	ssize_t write;
	char *buffer;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		close(fd);
		return (0);
	}

	read = r(fd, buffer, letters);
	close(fd);
	if (read == -1)
	{
		free(buffer);
		return (0);
	}

	write = w(STDOUT_FILENO, buffer, read);
	free(buffer);

	if (write != read)
	return (0);

	return (write);
}
