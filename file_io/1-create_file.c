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
 * create_file - creates a file and writes text to it.
 * @filename: the name of the file to create.
 * @text_content: the content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd, bytesWritten, text_len = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	text_len = strlen(text_content);
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1)
	return (-1);

if (text_content != NULL)
{
	bytesWritten = write(fd, text_content, text_len);
if (bytesWritten == -1)
{
	close(fd);
	return (-1);
}
}
close(fd);
return (-1);
}
