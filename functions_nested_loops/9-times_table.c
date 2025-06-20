#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
_putchar((a * b) / 10 + '0');
_putchar((a * b) % 10 + '0');
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
}
