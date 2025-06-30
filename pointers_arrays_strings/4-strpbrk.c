#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the characters to match in s
 * * Return: a pointer to the byte
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
{
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
}
return (NULL);
}
