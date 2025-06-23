#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * more_numbers - Prints the numbers from 0 to 14, ten times.
 *
 * Return: void
 */
void more_numbers(void)
{
int n, i;
for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar ((i / 10) + '0');
_putchar ((i % 10) + '0');
}
}
_putchar('\n');
}
}
