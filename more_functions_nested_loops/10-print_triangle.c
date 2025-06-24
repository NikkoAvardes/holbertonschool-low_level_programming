#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle of size 'size'
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar ('\n');
}
else if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
