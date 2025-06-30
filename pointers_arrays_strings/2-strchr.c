#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
while ((s[i] != '\0') && (s[i] != c))
i++;
return (c == s[i] ? (char *)s + i : NULL);
}
