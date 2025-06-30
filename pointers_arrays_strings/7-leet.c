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
int j = 0;
char *ltr = "aeotlAEOTL";
char *rplc = "4307143071";
while (str[i] != '\0')
{
j = 0;
while (ltr[j] != '\0')
{
if (str[i] == ltr[j])
str[i] = rplc[j];
j++;
}
i++;
}

return (str);
}
