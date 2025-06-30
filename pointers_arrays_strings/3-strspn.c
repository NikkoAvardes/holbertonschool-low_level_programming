#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the characters to match in s
 * * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int n = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
n++;
break;
}
j++;
}
if (accept[j] == '\0')
break;
i++;
}
return (n);
}
