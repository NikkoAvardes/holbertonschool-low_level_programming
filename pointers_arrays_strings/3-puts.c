#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - prints a string to stdout
 * @str: string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}
