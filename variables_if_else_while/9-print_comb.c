#include <stdio.h>
/**
* main - Entry point
*
* Rerurn: Always 0 (Success)
*
*/
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c + 0);
if (c < '9')
{
putchar(',');
putchar(' ');
}
}
return (0);
}
