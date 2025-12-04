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
	ssize_t read2;
	ssize_t write2;
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

	read2 = read(fd, buffer, letters);
	close(fd);
	if (read2 == -1)
	{
		free(buffer);
		return (0);
	}

	write2 = write(STDOUT_FILENO, buffer, read2);
	free(buffer);

	if (write2 != read2)
	return (0);

	return (write2);
}
