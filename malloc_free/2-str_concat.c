#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * * Return: pointer to the newly allocated space in memory
 * containing the concatenated string, or NULL if insufficient memory
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int i;
int j;
int len1 = 0;
int len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

ptr = malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
ptr[i] = s1[i];

for (j = 0; j < len2; j++)
{
ptr[len1 + j] = s2[j];
}
ptr[len1 + len2] = '\0';
return (ptr);
}
