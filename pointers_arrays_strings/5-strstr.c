#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - locates a substring in a string
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: pointer
 */
#include <stddef.h>
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
{
if (needle[j] == '\0')
{
return (&haystack[i]);
}
while (haystack[i] != '\0')
{
j = 0;
while (needle[j] != '\0' && haystack[i + j] == needle[j])
{
j++;
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
i++;
}
}
return (NULL);
}
