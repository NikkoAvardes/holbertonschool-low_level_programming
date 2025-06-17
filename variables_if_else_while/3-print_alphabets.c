#include <stdio.h>
/**
* main - Prints the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c, b;
for (c = 'a'; c <= 'z'; c++)
for (b = 'A'; b <= 'Z'; b++)
{
putchar(b);
putchar(c);
}
putchar('\n');
return (0);
}
