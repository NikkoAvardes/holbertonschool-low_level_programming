#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory area with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
