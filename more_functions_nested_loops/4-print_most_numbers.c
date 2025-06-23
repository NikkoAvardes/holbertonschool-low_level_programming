#include "main.h"
#include <stdlib.h>
/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
int n = 0;
for (n = '0'; n <= '9'; n++)
{
if (n == '2' || n == '4')
{
continue;
}
{
_putchar (n);
}
}
_putchar ('\n');
}
