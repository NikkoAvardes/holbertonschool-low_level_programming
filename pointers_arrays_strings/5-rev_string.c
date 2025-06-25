#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;

while (*end != '\0')
{
end++;
}
end--;

while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
