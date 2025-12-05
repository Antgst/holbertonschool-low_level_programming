#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * usage_error - prints usage message and exits with code 97
 */
static void usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * read_error - prints read error message and exits with code 98
 * @filename: name of the file that can't be read
 */
static void read_error(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * write_error - prints write error message and exits with code 99
 * @filename: name of the file that can't be written to
 */
static void write_error(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_error - prints close error message and exits with code 100
 * @fd: file descriptor that can't be closed
 */
static void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * close_fd - closes a file descriptor or exits with code 100
 * @fd: file descriptor to close
 */
static void close_fd(int fd)
{
	if (close(fd) == -1)
		close_error(fd);
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t rd, wr, off;
	char buffer[1024];

	if (ac != 3)
		usage_error();

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		read_error(av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		write_error(av[2]);
	}

	rd = read(fd_from, buffer, 1024);
	while (rd > 0)
	{
		off = 0;
		while (off < rd)
		{
			wr = write(fd_to, buffer + off, rd - off);
			if (wr <= 0)
			{
				close_fd(fd_from);
				close_fd(fd_to);
				write_error(av[2]);
			}
			off += wr;
		}
		rd = read(fd_from, buffer, 1024);
	}

	if (rd == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		read_error(av[1]);
	}

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
