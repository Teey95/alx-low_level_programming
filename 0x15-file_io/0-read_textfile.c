#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: sum of letters to read and print
 * Return: actual sum of letters read and printed, 0 for failure
 */
ssize_t read_textfile(const char *file, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buf;

	if (file == NULL)
		return (0);

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1); /* Add space for null terminator */
	if (buf == NULL)
		return (0);

	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[n_read] = '\0'; /* Add null terminator */

	n_written = write(STDOUT_FILENO, buf, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (n_written);
}
