#include "main.h"
#include <unistd.h>
/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int len = 0;
int start;
while (str[len] != '\0')
len++;
if (len % 2 == 0)
start = len / 2;
else
start = (len + 1) / 2;
while (str[start] != '\0')
{
write(1, &str[start], 1);
start++;
}
write(1, "\n", 1);
}
