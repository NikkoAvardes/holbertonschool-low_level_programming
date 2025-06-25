#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
int i;
int len = strlen(str);
for (i = 0; i < len; i += 2)
{
write(1, &str[i], 1);
}
write(1, "\n", 1);
}
