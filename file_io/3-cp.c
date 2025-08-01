#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
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

	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		exit(1);
	}

	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		exit(1);
	}

	while ((c = fgetc(fptr1)) != EOF)
	{
		fputc(c, fptr2);
	}

	fclose(fptr1);
	fclose(fptr2);
	return (0);
}
