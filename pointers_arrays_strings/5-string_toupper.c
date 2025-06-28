#include "main.h"
#include <stdio.h>
/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: the string to be converted
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);

}
