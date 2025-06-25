#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
char *end = s;
while (*end != '\0')
{
end++;
}
end--;
while (end >= s)
{
write(1, end, 1);
end--;
}
write(1, "\n", 1);
}
