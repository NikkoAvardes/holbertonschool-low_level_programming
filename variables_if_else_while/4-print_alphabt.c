#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
if (c != 'q' && c != 'e')
{
putchar('\n');
return (0);
}
}
