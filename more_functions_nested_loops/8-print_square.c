#include "main.h"
#include <stdio.h>
/**
 * print_square - Prints a square of size 'size' using the '#' character.
 * @size: The size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar ('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
