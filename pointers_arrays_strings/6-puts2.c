#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
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
printf("%c", str[i]);
}
printf("\n");
}
