#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Append text at the end of a file
 * @filename: Name of the file
 * @text_content: String to append
 *
 * Return: Success = 1, Fail = -1
 */

 int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write2;
	size_t len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (len == 0)
	{
		close(fd);
		return(-1);
	}
	
	write2 = write(fd, text_content, len);
	if (write2 == -1 || (size_t)write2 != len)
	{
		close(fd);
		return(-1);
	}
	close(fd);
	return(1);
}
