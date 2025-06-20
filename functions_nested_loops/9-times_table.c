#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int i, j, product;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;
if (j == 0)
{
printf("%d", product);
}
else
{
printf(", %2d", product);
}
}
if (i < 9)
{
printf("\n");
}
}
printf("\n");
}
