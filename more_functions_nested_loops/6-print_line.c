#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Return: void
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar ('_');
}
}
else if (n <= 0)
{
_putchar ('\n');
}
}
