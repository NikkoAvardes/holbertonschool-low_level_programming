#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (i = 10; i < 16; i++)
{
putchar (i - 10 + 'a');
}
putchar('\n');
return (0);
}
