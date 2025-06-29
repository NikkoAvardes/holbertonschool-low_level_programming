#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337 (leet) speak
 * @str: the string to be encoded
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] == 'a' || str[i] == 'A')
{
str[i] = '4';
}
else if (str[i] == 'e' || str[i] == 'E')
{
str[i] = '3';
}
else if (str[i] == 'o' || str[i] == 'O')
{
str[i] = '0';
}
else if (str[i] == 't' || str[i] == 'T')
{
str[i] = '7';
}
else if (str[i] == 'l' || str[i] == 'L')
{
str[i] = '1';
}
i++;
}
return (str);
}
