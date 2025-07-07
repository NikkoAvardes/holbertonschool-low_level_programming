#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
int length;
char *cpy;
int i;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

cpy = malloc(sizeof(char) * (length + 1));

if (cpy == NULL)
return (NULL);

for (i = 0; i < length; i++)
cpy[i] = str[i];

cpy[length] = '\0';

return (cpy);
}
