#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies up to n characters
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
