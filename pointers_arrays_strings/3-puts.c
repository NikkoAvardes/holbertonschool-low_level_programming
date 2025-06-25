#include "main.h"
#include <stdio.h>
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
putchar(*str);
str++;
}
}
