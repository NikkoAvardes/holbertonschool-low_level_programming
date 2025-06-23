#include "main.h"
#include <stdlib.h>
/**
 * print_numbers - Prints the numbers from 0 to 9.
 *
 * Return: void
 */
void print_numbers(void)
{
int n = 0;
while (n <= 9)
{
_putchar (n + 48);
n++;
}
_putchar('\n');
}
