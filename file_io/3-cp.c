#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
/**
 * close_fd - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 *
 * If closing the file descriptor fails, it prints an error message
 * and exits the program with status code 100.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of one file to another.
 * This program prompts the user for the names of
 * opens the source file for reading, and the destination file for writing.
 * It reads the contents of the source file character
 * to the destination file. If either file cannot
 * and exits the program. After copying, it closes both files.
 *
 * Return: 0 on success, or exits with 1 on error.
 */
int main(void)
{
	FILE *fptr1, *fptr2;
	char filename[100];
	int c;

	printf("Enter the filename to open for reading: ");
	scanf("%s", filename);

	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s\n", filename);
		exit(1);
	}

	printf("Enter the filename to open for writing: ");
	scanf("%s", filename);

	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s\n", filename);
		exit(1);
	}

	while ((c = fgetc(fptr1)) != EOF)
	{
		fputc(c, fptr2);
	}

	printf("Contents copied to %s\n", filename);

	fclose(fptr1);
	fclose(fptr2);
	return (0);
}
