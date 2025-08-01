#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *
 * Return: the actual number of letters
 *  it could read and print, or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytesRead);
}
